#ifndef _FORWARD_LIST_ITERATOR_HPP_
#define _FORWARD_LIST_ITERATOR_HPP_

template <typename T>
ForwardList<T>::Iterator::Iterator(ForwardList<T>::ListNode_* ptr) : ptr_(ptr)
{
}

template <typename T>
bool ForwardList<T>::Iterator::operator!=(const ForwardList<T>::Iterator& it)
{
    return ptr_ != it.ptr_;
}

template <typename T>
typename ForwardList<T>::Iterator& ForwardList<T>::Iterator::operator++()
{
    ptr_ = ptr_->next;
    return *this;
}

template <typename T>
T& ForwardList<T>::Iterator::operator*()
{
    return ptr_->data;
}

template <typename T>
typename ForwardList<T>::Iterator ForwardList<T>::Begin()
{
    return ForwardList<T>::Iterator(head_);
}

template <typename T>
typename ForwardList<T>::Iterator ForwardList<T>::End()
{
    return ForwardList<T>::Iterator(nullptr);
}


#endif //_FORWARD_LIST_ITERATOR_HPP_
