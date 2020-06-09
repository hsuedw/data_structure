#ifndef _FORWARD_LIST_CONST_ITERATOR_HPP_
#define _FORWARD_LIST_CONST_ITERATOR_HPP_

#if 0
template <typename T>
ForwardList<T>::ConstIterator::ConstIterator(ForwardList<T>::ListNode_* ptr) : ptr_(ptr)
{
}
#endif

#if 0
template <typename T>
bool ForwardList<T>::ConstIterator::operator!=(const ForwardList<T>::ConstIterator& it)
{
    return ptr_ != it.ptr_;
}
#endif

#if 0
template <typename T>
typename ForwardList<T>::ConstIterator& ForwardList<T>::ConstIterator::operator++()
{
    ptr_ = ptr_->next;
    return *this;
}
#endif

#if 0
template <typename T>
const T& ForwardList<T>::ConstIterator::operator*()
{
    return ptr_->data;
}
#endif

#if 0
template <typename T>
typename ForwardList<T>::ConstIterator ForwardList<T>::CBegin()
{
    return ForwardList<T>::ConstIterator(head_);
}
#endif

#if 0
template <typename T>
typename ForwardList<T>::ConstIterator ForwardList<T>::CEnd()
{
    return ForwardList<T>::ConstIterator(nullptr);
}
#endif

#if 0
template <typename T>
typename ForwardList<T>::ConstIterator ForwardList<T>::Begin() const
{
    return ForwardList<T>::ConstIterator(head_);
}
#endif

#if 0
template <typename T>
typename ForwardList<T>::ConstIterator ForwardList<T>::End() const
{
    return ForwardList<T>::ConstIterator(nullptr);
}
#endif

#endif //_FORWARD_LIST_CONST_ITERATOR_HPP_
