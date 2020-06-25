#ifndef _LIST_REVERSE_ITERATOR_HPP_
#define _LIST_REVERSE_ITERATOR_HPP_

template <typename T>
List<T>::ReverseIterator::ReverseIterator(List<T>::ListNode_ *ptr) : ptr_(ptr)
{
}

template <typename T>
bool List<T>::ReverseIterator::operator!=(const List<T>::ReverseIterator& it)
{
    return ptr_ != it.ptr_;
}

template <typename T>
typename List<T>::ReverseIterator& List<T>::ReverseIterator::operator++()
{
    ptr_ = ptr_->prev;
    return *this;
}

template <typename T>
typename List<T>::ReverseIterator& List<T>::ReverseIterator::operator--()
{
    ptr_ = ptr_->next;
    return *this;
}

template <typename T>
T& List<T>::ReverseIterator::operator*()
{
    return ptr_->data;
}

template <typename T>
typename List<T>::ReverseIterator List<T>::RBegin()
{
    return List<T>::ReverseIterator(tail_);
}

template <typename T>
typename List<T>::ReverseIterator List<T>::REnd()
{
    return List<T>::ReverseIterator(nullptr);
}

#endif //_LIST_REVERSE_ITERATOR_HPP_
