
#ifndef _VECTOR_HPP_
#define _VECTOR_HPP_

#include <initializer_list>

template <typename T>
class Vector
{
public:
    Vector();
    Vector(size_t n);
    Vector(const Vector<T>& other);
    Vector(const std::initializer_list<T>& other);


    size_t Size() const;

    T& operator[](size_t n);
    const T& operator[](size_t n) const;

    void PushBack(const T& val);
    void PushBack(T&& val);

private:
    T* data_;
    size_t size_;
};

template <typename T>
Vector<T>::Vector()
{
    size_ = 0;
    data_ = nullptr;
}

template <typename T>
Vector<T>::Vector(size_t n)
{
    size_ = n;
    data_ = new T[size_];
}

template <typename T>
Vector<T>::Vector(const Vector<T>& other)
{

}


template <typename T>
Vector<T>::Vector(const std::initializer_list<T>& other)
{

}



template <typename T>
size_t Vector<T>::Size() const
{
    return size_;
}

template <typename T>
T& Vector<T>::operator[](size_t n)
{
    return data_[0];
}

template <typename T>
const T& Vector<T>::operator[](size_t n) const
{
    return data_[0];
}

template <typename T>
void Vector<T>::PushBack(const T& val)
{

}

template <typename T>
void Vector<T>::PushBack(T&& val)
{

}

#endif // _VECTOR_HPP_
