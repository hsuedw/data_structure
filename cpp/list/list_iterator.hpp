#ifndef _LIST_ITERATOR_HPP_
#define _LIST_ITERATOR_HPP_

template <typename T>
List<T>::Iterator::Iterator(List<T>::ListNode_ *ptr) : ptr_(ptr)
{
}

template <typename T>
bool List<T>::Iterator::operator!=(const List<T>::Iterator& it)
{
    return ptr_ != it.ptr_;
}

template <typename T>
typename List<T>::Iterator& List<T>::Iterator::operator++()
{
    ptr_ = ptr_->next;
    return *this;
}

template <typename T>
T& List<T>::Iterator::operator*()
{
    return ptr_->data;
}

template <typename T>
typename List<T>::Iterator List<T>::Begin()
{
    return List<T>::Iterator(head_);
}

template <typename T>
typename List<T>::Iterator List<T>::End()
{
    return List<T>::Iterator(nullptr);
}

#endif //_LIST_ITERATOR_HPP_
