
#ifndef _VECTOR_HPP_
#define _VECTOR_HPP_

#include <utility>
#include <initializer_list>

#define DEFAULT_VECTOR_CAPACITY (8)

template <typename T>
class Vector
{
public:
    Vector();
    Vector(size_t n);
    Vector(const Vector<T> &other);
    Vector(const std::initializer_list<T> &other);
    Vector<T>& operator=(const Vector<T>& other);
    Vector<T>& operator=(Vector<T>&& other);
    Vector<T>& operator=(std::initializer_list<T> &other);
    ~Vector();

    size_t Size() const;
    void Resize(size_t n);
    size_t Capacity() const;
    bool Empty() const;
    void Reserve(size_t n);

    T& operator[](size_t n);
    const T& operator[](size_t n) const;
    T& Front();
    const T& Front() const;
    T& Back();
    const T& Back() const;

    void PushBack(const T &val);
    void PushBack(T &&val);
    void PopBack();
    void Swap(Vector<T> &other);
    void Clear();

    class Iterator
    {
        friend class Vector;
    public:
        bool operator!=(const Iterator& other);
        T& operator*();
        Iterator& operator++();
        Iterator operator++(int);
    private:
        Iterator(T* ptr);
        T* ptr_;
    };
    Iterator Begin();
    Iterator End();

private:
    T* data_;
    size_t size_;
    size_t capacity_;
};

template <typename T>
Vector<T>::Vector()
{
    size_ = 0;
    capacity_ = DEFAULT_VECTOR_CAPACITY;
    data_ = new T[capacity_];
}

template <typename T>
Vector<T>::Vector(size_t n)
{
    size_ = n;
    if (0 == n) {
        capacity_ = DEFAULT_VECTOR_CAPACITY;
    }
    data_ = new T[capacity_];
}

template <typename T>
Vector<T>::Vector(const Vector<T>& other)
{
    size_ = other.size_;
    capacity_ = other.capacity_;
    data_ = new T[capacity_];
    for (int i = 0; i < size_; ++i) {
        data_[i] = other[i];
    }
}

template <typename T>
Vector<T>::Vector(const std::initializer_list<T>& other)
{
    size_ = other.size();
    if (0 == size_) {
        capacity_ = DEFAULT_VECTOR_CAPACITY;
        data_ = new T[capacity_];
        return;
    }
    capacity_ = size_ * 2;
    data_ = new T[capacity_];

    size_t i = 0;
    for (const T& v: other) {
        data_[i] = v;
        ++i;
    }
}

template <typename T>
Vector<T>& Vector<T>::operator=(const Vector<T>& other)
{
    if (this == &other) {
        return *this;
    }

    if (size_ < other.Size()) {
        size_ = other.Size();
        if (size_ < capacity_) {
            capacity_ = size_ * 2;
            delete[] data_;
            data_ = new T[capacity_];
        }
    }
    for (size_t i = 0; i < other.Size(); ++i) {
        data_[i] = other[i];
    }
}

template <typename T>
Vector<T>& Vector<T>::operator=(Vector<T>&& other)
{
    if (nullptr != data_) {
        delete[] data_;
    }
    data_ = other.data_;
    size_ = other.size_;
    capacity_ = other.capacity_;

    other.size_ = 0;
    other.capacity_ = DEFAULT_VECTOR_CAPACITY;
    other.data_ = new T[capacity_];

    return *this;
}

template <typename T>
Vector<T>& Vector<T>::operator=(std::initializer_list<T> &other)
{
    size_ = other.size;
    if (size_ > capacity_) {
        delete[] data_;
        capacity_ = size_ * 2;
        data_ = new T[capacity_];
    }

    for (int i = 0; i < size_; ++i) {
        data_[i] = other[i];
    }

    return *this;
}

template <typename T>
Vector<T>::~Vector()
{
    if (nullptr != data_) {
        delete[] data_;
    }
}

template <typename T>
size_t Vector<T>::Size() const
{
    return size_;
}

template <typename T>
void Vector<T>::Resize(size_t n)
{
    if (n > capacity_) {
        capacity_ = n * 2;
        T* tempData = new T[capacity_];
        for (int i = 0; i <= size_; ++i) {
            tempData[i] = data_[i];
        }
        delete[] data_;
        data_ = tempData;
    }

    if (n > size_) {
        for (int i = size_; i < n; ++i) {
            data_[i] = 0;
        }
    }

    size_ = n;
}

template <typename T>
size_t Vector<T>::Capacity() const
{
    return capacity_;
}

template <typename T>
bool Vector<T>::Empty() const
{
    return size_ == 0;
}

template <typename T>
void Vector<T>::Reserve(size_t n)
{
    if (n > capacity_) {
        capacity_ = n;
        T* tempData = new T[capacity_];
        for (int i = 0; i < size_; ++i) {
            tempData[i] = data_[i];
        }
        delete[] data_;
        data_ = tempData;
    }
}

template <typename T>
T& Vector<T>::operator[](size_t n)
{
    return data_[n];
}

template <typename T>
const T& Vector<T>::operator[](size_t n) const
{
    return data_[n];
}

template <typename T>
T& Vector<T>::Front()
{
    return data_[0];
}

template <typename T>
const T& Vector<T>::Front() const
{
    return data_[0];
}

template <typename T>
T& Vector<T>::Back()
{
    return data_[size_ - 1];
}

template <typename T>
const T& Vector<T>::Back() const
{
    return data_[size_ - 1];
}

template <typename T>
void Vector<T>::PushBack(const T &val)
{
    if (size_ >= capacity_) {
        Resize(size_);
    }
    data_[size_] = val;
    ++size_;
}

template <typename T>
void Vector<T>::PushBack(T &&val)
{
    if (size_ >= capacity_) {
        Resize(size_);
    }
    data_[size_] = std::move(val);
    ++size_;
}

template <typename T>
void Vector<T>::PopBack()
{
    if (size_ > 0) {
        --size_;
    }
}

template <typename T>
void Vector<T>::Swap(Vector<T> &other)
{
    std::swap(data_, other.data_);
    std::swap(size_, other.size_);
    std::swap(capacity_, other.capacity_);
}

template <typename T>
void Vector<T>::Clear()
{
    size_ = 0;
}

/*------------------------------------------*/
#include "vector_iterator.hpp"

/*------------------------------------------*/
#include "vector_utility.hpp"

#endif // _VECTOR_HPP_
