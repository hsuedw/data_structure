#ifndef _LIST_CONST_REVERSE_ITERATOR_HPP_
#define _LIST_CONST_REVERSE_ITERATOR_HPP_

template <typename T>
List<T>::ConstReverseIterator::ConstReverseIterator(List<T>::ListNode_ *ptr) : ptr_(ptr)
{
}

template <typename T>
bool List<T>::ConstReverseIterator::operator!=(const List<T>::ConstReverseIterator& it)
{
    return ptr_ != it.ptr_;
}

template <typename T>
typename List<T>::ConstReverseIterator& List<T>::ConstReverseIterator::operator++()
{
    ptr_ = ptr_->prev;
    return *this;
}

#if 0
template <typename T>
typename List<T>::ConstReverseIterator& List<T>::ConstReverseIterator::operator--()
{
    ptr_ = ptr_->next;
    return *this;
}
#endif

template <typename T>
const T& List<T>::ConstReverseIterator::operator*()
{
    return ptr_->data;
}

template <typename T>
typename List<T>::ConstReverseIterator List<T>::CRBegin() const
{
    return List<T>::ConstReverseIterator(tail_);
}

template <typename T>
typename List<T>::ConstReverseIterator List<T>::CREnd() const
{
    return List<T>::ConstReverseIterator(nullptr);
}

#endif //_LIST_CONST_REVERSE_ITERATOR_HPP_
