#ifndef _VECTOR_CONST_ITERATOR_HPP_
#define _VECTOR_CONST_ITERATOR_HPP_

#if 0
template <typename T>
Vector<T>::ConstIterator::ConstIterator(const T* ptr) : ptr_(ptr)
{
}

template <typename T>
bool Vector<T>::ConstIterator::operator!=(const ConstIterator& other)
{
    return ptr_ != other.ptr_;
}

template <typename T>
const T& Vector<T>::ConstIterator::operator*() const
{
    return *ptr_;
}

template <typename T>
typename Vector<T>::ConstIterator& Vector<T>::ConstIterator::operator++()
{
    ++ptr_;
    return *this;
}

template <typename T>
typename Vector<T>::ConstIterator Vector<T>::ConstIterator::operator++(int)
{
    Vector<T>::ConstIterator ret(ptr_);
    ++ptr_;
    return ret;
}

template <typename T>
typename Vector<T>::ConstIterator Vector<T>::CBegin() const
{
    return Vector<T>::ConstIterator(data_);
}

template <typename T>
typename Vector<T>::ConstIterator Vector<T>::CEnd() const
{
    return Vector<T>::ConstIterator(data_ + Size());
}

template <typename T>
typename Vector<T>::ConstIterator Vector<T>::Begin() const
{
    return Vector<T>::ConstIterator(data_);
}

template <typename T>
typename Vector<T>::ConstIterator Vector<T>::End() const
{
    return Vector<T>::ConstIterator(data_ + Size());
}
#endif

#endif //_VECTOR_CONST_ITERATOR_HPP_
