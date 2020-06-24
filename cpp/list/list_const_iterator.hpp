#ifndef _LIST_CONST_UTILITY_HPP_
#define _LIST_CONST_UTILITY_HPP_

template <typename T>
List<T>::ConstIterator::ConstIterator(List<T>::ListNode_ *ptr) : ptr_(ptr)
{
}

template <typename T>
bool List<T>::ConstIterator::operator!=(const List<T>::ConstIterator& it)
{
    return ptr_ != it.ptr_;
}

template <typename T>
typename List<T>::ConstIterator& List<T>::ConstIterator::operator++()
{
    ptr_ = ptr_->next;
    return *this;
}

template <typename T>
const T& List<T>::ConstIterator::operator*()
{
    return ptr_->data;
}

template <typename T>
typename List<T>::ConstIterator List<T>::CBegin()
{
    return List<T>::ConstIterator(head_);
}

template <typename T>
typename List<T>::ConstIterator List<T>::CEnd()
{
    return List<T>::ConstIterator(nullptr);
}

template <typename T>
typename List<T>::ConstIterator List<T>::Begin() const
{
    return List<T>::ConstIterator(head_);
}

template <typename T>
typename List<T>::ConstIterator List<T>::End() const
{
    return List<T>::ConstIterator(nullptr);
}


#endif // _LIST_CONST_UTILITY_HPP_
