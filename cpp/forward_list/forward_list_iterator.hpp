#ifndef _FORWARD_LIST_ITERATOR_HPP_
#define _FORWARD_LIST_ITERATOR_HPP_

#if 0
template <typename T>
ForwardList<T>::Iterator::Iterator(ForwardList<T>::ListNode_* ptr) : ptr_(ptr)
{
}
#endif

#if 0
template <typename T>
bool ForwardList<T>::Iterator::operator!=(const ForwardList<T>::Iterator& it)
{
    return ptr_ != it.ptr_;
}
#endif

#if 0
template <typename T>
typename ForwardList<T>::Iterator& ForwardList<T>::Iterator::operator++()
{
    ptr_ = ptr_->next;
    return *this;
}
#endif

#if 0
template <typename T>
T& ForwardList<T>::Iterator::operator*()
{
    return ptr_->data;
}
#endif

#if 0
template <typename T>
typename ForwardList<T>::Iterator ForwardList<T>::Begin()
{
    return ForwardList<T>::Iterator(head_);
}
#endif

#if 0
template <typename T>
typename ForwardList<T>::Iterator ForwardList<T>::End()
{
    return ForwardList<T>::Iterator(nullptr);
}
#endif


#endif //_FORWARD_LIST_ITERATOR_HPP_
