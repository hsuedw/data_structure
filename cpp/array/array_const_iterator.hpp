
#ifndef _ARRAY_CONST_ITERATOR_HPP_
#define _ARRAY_CONST_ITERATOR_HPP_

template <typename T, size_t N>
bool Array<T, N>::ConstIterator::operator!=(const Array<T, N>::ConstIterator& other)
{
    return ptr_ != other.ptr_;
}

template <typename T, size_t N>
bool Array<T, N>::ConstIterator::operator==(const Array<T, N>::ConstIterator& other)
{
    return ptr_ == other.ptr_;
}

template <typename T, size_t N>
Array<T, N>::ConstIterator::ConstIterator(const T* ptr) : ptr_(ptr)
{
}

template <typename T, size_t N>
const T& Array<T, N>::ConstIterator::operator*() const
{
    return *ptr_;
}

template <typename T, size_t N>
typename Array<T, N>::ConstIterator& Array<T, N>::ConstIterator::operator++()
{
    ++ptr_;
    return *this;
}

template <typename T, size_t N>
typename Array<T, N>::ConstIterator Array<T, N>::ConstIterator::operator++(int)
{
    ConstIterator ret(ptr_);
    ++ptr_;
    return ret;
}

#endif //_ARRAY_CONST_ITERATOR_HPP_
