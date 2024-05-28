#pragma once

#define HolderDefs(expr) __forceinline std::remove_const_t<std::remove_reference_t<decltype(*(expr))>>* get() { \
        return (std::remove_const_t<std::remove_reference_t<decltype(*(expr))>>*)rawPtr(); \
    } \
public: \
\
    __forceinline auto operator->() { \
        return get(); \
    } \
\
    __forceinline bool operator!() { \
        return !get(); \
    } \
\
    __forceinline operator std::remove_const_t<std::remove_reference_t<decltype(*(expr))>>*() { \
        return get(); \
    } \

#define HolderDefsFunc(expr) __forceinline std::remove_const_t<std::remove_reference_t<decltype(expr)>> get() { \
        return (std::remove_const_t<std::remove_reference_t<decltype(expr)>>)rawPtr(); \
    } \
public: \
\
    __forceinline auto operator->() { \
        return get(); \
    } \
\
    __forceinline bool operator!() { \
        return !get(); \
    } \
\
    __forceinline operator std::remove_const_t<std::remove_reference_t<decltype(expr)>>() { \
        return get(); \
    } \

#define HolderDefsExisting(T) __forceinline T* get() { \
        return (T*)rawPtr(); \
    } \
public: \
\
    __forceinline auto operator->() { \
        return get(); \
    } \
\
    __forceinline bool operator!() { \
        return !get(); \
    } \
\
    __forceinline operator T*() { \
        return get(); \
    }

#define HolderClass(name, expr) class name ## Holder { \
private: \
     static inline std::remove_const_t<std::remove_reference_t<decltype(*(expr))>>* staticPtr = expr; \
public: \
    void* rawPtr() { \
        return staticPtr; \
    } \
    HolderDefs(expr) \
}; \

#define HolderStatic(name, expr) class name ## Holder { \
private: \
     static inline std::remove_const_t<std::remove_reference_t<decltype(*(expr))>>* staticPtr = expr; \
public: \
    void* rawPtr() { \
        return staticPtr; \
    } \
    HolderDefs(expr) \
}; \
name ## Holder name = name ## Holder()

#define HolderFunc(name, expr) class name ## Holder { \
private: \
     static inline std::remove_const_t<std::remove_reference_t<decltype(expr)>> staticPtr = expr; \
public: \
    __forceinline void* rawPtr() { \
        return staticPtr; \
    } \
    HolderDefsFunc(expr) \
}; \
static inline name ## Holder name = name ## Holder()

#define Holder(name, expr) class name ## Holder { \
public: \
    __forceinline void* rawPtr() { \
        return expr; \
    } \
    HolderDefs(expr) \
}; \
name ## Holder name = name ## Holder()

#define HolderFromExistingClass(name, T) class name ## Holder { \
private: \
     T* ptr; \
public: \
    __forceinline void* rawPtr() { \
        return ptr; \
    } \
    __forceinline name ## Holder(T *ptr) { \
        this->ptr = ptr; \
    } \
    HolderDefsExisting(T) \
}; \
