
#ifndef _ARRAY_HPP_
#define _ARRAY_HPP_

#include <iostream>
#include <utility>
#include <initializer_list>

template <typename T, size_t N>
class Array {
public:
    Array();
    Array(const Array<T, N> &other) = delete;
    Array(const std::initializer_list<T> &other);
    ~Array();

    size_t Size();
    size_t Size() const;
    constexpr bool Empty() noexcept;

    Array<T, N> & operator=(const Array<T, N> &other) = delete;
    T& operator[](const size_t i);
    const T& operator[](const size_t i) const;
    T& Front();
    const T& Front() const;
    T& Back();
    const T& Back() const;
    T* Data();
    const T* Data() const;

    void Fill(const T& val);
    void Swap(Array<T, N> &other);

    class Iterator {
        friend class Array;
    public:
        bool operator==(const Iterator& other);
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

    class ConstIterator {
        friend class Array;
    public:
        bool operator==(const ConstIterator& other); 
        bool operator!=(const ConstIterator& other); 
        const T& operator*() const;
        ConstIterator& operator++();
        ConstIterator operator++(int);
    private:
        ConstIterator(const T* ptr);
        const T* ptr_;
    };
    ConstIterator CBegin() const;
    ConstIterator CEnd() const;
    ConstIterator Begin() const;
    ConstIterator End() const;

private:
    T *data_;
    size_t size_;
};

/********************************/

template <typename T, size_t N>
Array<T, N>::Array() : size_(N), data_(nullptr)
{
    if (0 != size_) {
        data_ = new T[size_];
    }
}

template <typename T, size_t N>
Array<T, N>::Array(const std::initializer_list<T>& other) : size_(N), data_(nullptr)
{
    int i = 0;
    data_ = new T[size_];
    for (const T& v : other) {
        data_[i] = v;
        ++i;
        if (i >= size_) {
            break;
        }
    }
}

template <typename T, size_t N>
Array<T, N>::~Array()
{
    if (0 != size_) {
        delete [] data_;
    }
}


template <typename T, size_t N>
size_t Array<T, N>::Size()
{
    return size_;
}

template <typename T, size_t N>
size_t Array<T, N>::Size() const
{
    return size_;
}

template <typename T, size_t N>
constexpr bool Array<T, N>::Empty() noexcept
{
    return Size() == 0;
}

template <typename T, size_t N>
T& Array<T, N>::operator[](const size_t i)
{
    return data_[i];
}

template <typename T, size_t N>
const T& Array<T, N>::operator[](const size_t i) const
{
    return data_[i];
}

template <typename T, size_t N>
T& Array<T, N>::Front()
{
    return data_[0];
}

template <typename T, size_t N>
const T& Array<T, N>::Front() const
{
    return data_[0];
}

template <typename T, size_t N>
T& Array<T, N>::Back()
{
    return data_[size_ - 1];
}

template <typename T, size_t N>
const T& Array<T, N>::Back() const
{
    return data_[size_ - 1];
}

template <typename T, size_t N>
T* Array<T, N>::Data()
{
    return data_;
}

template <typename T, size_t N>
const T* Array<T, N>::Data() const
{
    return data_;
}

template <typename T, size_t N>
void Array<T, N>::Fill(const T& val)
{
    for (int i = 0; i < Size(); ++i) {
        data_[i] = val;
    }
}

template <typename T, size_t N>
void Array<T, N>::Swap(Array<T, N> &other)
{
    std::swap(data_, other.data_);
}

template <typename T, size_t N>
typename Array<T, N>::Iterator Array<T, N>::Begin()
{
    return Array<T, N>::Iterator(data_);
}

template <typename T, size_t N>
typename Array<T, N>::Iterator Array<T, N>::End()
{
    return Array<T, N>::Iterator(data_ + Size());
}

template <typename T, size_t N>
typename Array<T, N>::ConstIterator Array<T, N>::CBegin() const
{
    return Array<T, N>::ConstIterator(data_);
}

template <typename T, size_t N>
typename Array<T, N>::ConstIterator Array<T, N>::CEnd() const
{
    return Array<T, N>::ConstIterator(data_ + Size());
}

template <typename T, size_t N>
typename Array<T, N>::ConstIterator Array<T, N>::Begin() const
{
    return Array<T, N>::ConstIterator(data_);
}

template <typename T, size_t N>
typename Array<T, N>::ConstIterator Array<T, N>::End() const
{
    return Array<T, N>::ConstIterator(data_ + Size());
}

/*--------- iterator -----------------------*/
#include "array_iterator.hpp"

/*--------- const iterator -----------------*/
#include "array_const_iterator.hpp"

/*------------------------------------------*/
#include "array_utility.hpp"

#endif // _ARRAY_HPP_
