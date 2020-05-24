
#ifndef _ARRAY_ITERATOR_HPP_
#define _ARRAY_ITERATOR_HPP_

template <typename T, size_t N>
bool Array<T, N>::Iterator::operator!=(const Array<T, N>::Iterator& other)
{
    return ptr_ != other.ptr_;
}

template <typename T, size_t N>
bool Array<T, N>::Iterator::operator==(const Array<T, N>::Iterator& other)
{
    return ptr_ == other.ptr_;
}

template <typename T, size_t N>
Array<T, N>::Iterator::Iterator(T* ptr) : ptr_(ptr)
{
}

template <typename T, size_t N>
T& Array<T, N>::Iterator::operator*()
{
    return *ptr_;
}

template <typename T, size_t N>
typename Array<T, N>::Iterator& Array<T, N>::Iterator::operator++()
{
    ++ptr_;
    return *this;
}

template <typename T, size_t N>
typename Array<T, N>::Iterator Array<T, N>::Iterator::operator++(int)
{
    Iterator ret(ptr_);
    ++ptr_;
    return ret;
}

#endif //_ARRAY_ITERATOR_HPP_
