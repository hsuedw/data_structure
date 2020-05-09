#ifndef _VECTOR_ITERATOR_HPP_
#define _VECTOR_ITERATOR_HPP_

template <typename T>
Vector<T>::Iterator::Iterator(T* ptr) : ptr_(ptr)
{
}

template <typename T>
bool Vector<T>::Iterator::operator!=(const Iterator& other)
{
    return ptr_ != other.ptr_;
}

template <typename T>
T& Vector<T>::Iterator::operator*()
{
    return *ptr_;
}

template <typename T>
typename Vector<T>::Iterator& Vector<T>::Iterator::operator++()
{
    ++ptr_;
    return *this;
}

template <typename T>
typename Vector<T>::Iterator Vector<T>::Iterator::operator++(int)
{
    Vector<T>::Iterator ret(ptr_);
    ++ptr_;
    return ret;
}

template <typename T>
typename Vector<T>::Iterator Vector<T>::Begin()
{
    return Vector<T>::Iterator(data_);
}

template <typename T>
typename Vector<T>::Iterator Vector<T>::End()
{
    return Vector<T>::Iterator(data_ + Size());
}


#endif //_VECTOR_ITERATOR_HPP_
