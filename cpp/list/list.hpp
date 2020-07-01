#ifndef _LIST_HPP_
#define _LIST_HPP_

#include <utility>
#include <initializer_list>

#include <iostream>

template <typename T>
class List
{
public:
    List();
    List(const List<T>& other);
    List(const std::initializer_list<T> &other);
    ~List();
    List<T>& operator=(const List<T>& other);

    bool Empty() const;
    size_t Size() const;

    void PushFront(const T& val);
    void PushFront(T&& val);
    void PopFront();
    void PushBack(const T& val);
    void PushBack(T&& val);
    void PopBack();

    class Iterator
    {
        friend List;
    public:
        bool operator!=(const Iterator& it);
	Iterator& operator++();
	Iterator& operator--();
	T& operator*();
    private:
	Iterator(typename List::ListNode_ *ptr);
        typename List::ListNode_ *ptr_;
    };
    Iterator Begin();
    Iterator End();

    class ReverseIterator
    {
        friend List;
    public:
        bool operator!=(const ReverseIterator& it);
	ReverseIterator& operator++();
	ReverseIterator& operator--();
	T& operator*();
    private:
	ReverseIterator(typename List::ListNode_ *ptr);
        typename List::ListNode_ *ptr_;
    };
    ReverseIterator RBegin();
    ReverseIterator REnd();

    class ConstIterator
    {
        friend List;
    public:
        bool operator!=(const ConstIterator& it);
        ConstIterator& operator++();
        const T& operator*();
    private:
        ConstIterator(typename List::ListNode_ *ptr);
        const typename List::ListNode_ *ptr_;
    };
    ConstIterator CBegin() const;
    ConstIterator CEnd() const;
    ConstIterator Begin() const;
    ConstIterator End() const;

    class ConstReverseIterator
    {
        friend List;
    public:
        bool operator!=(const ConstReverseIterator& it);
        ConstReverseIterator& operator++();
        const T& operator*();
    private:
        ConstReverseIterator(typename List::ListNode_ *ptr);
        const typename List::ListNode_ *ptr_;
    };
    ConstReverseIterator CRBegin() const;
    ConstReverseIterator CREnd() const;

private:
    struct ListNode_
    {
        T data;
	ListNode_ *next;
	ListNode_ *prev;
	ListNode_(const T& data) : data(data), next(nullptr), prev(nullptr) {}
	ListNode_(T&& data) : next(nullptr), prev(nullptr) {
            std::swap(this->data, data);
	}
    };

    ListNode_ *head_;
    ListNode_ *tail_;
};

template <typename T>
List<T>::List() : head_(nullptr), tail_(nullptr)
{
}

template <typename T>
List<T>::List(const List<T>& other)
{
    ListNode_ tmp(T{});
    ListNode_ *insertAt = &tmp;
    for (ListNode_ *copyFrom = other.head_; copyFrom != nullptr; copyFrom = copyFrom->next) {
        ListNode_ *newListNode = new ListNode_(copyFrom->data);
        insertAt->next = newListNode;
	newListNode->prev = insertAt;
	insertAt = insertAt->next;
    }
    head_ = tmp.next;
    head_->prev = nullptr;
    tail_ = insertAt;
}

template <typename T>
List<T>::List(const std::initializer_list<T> &other)
{
    ListNode_ tmp(T{});
    ListNode_ *insertAt = &tmp;
    for (const T& v: other) {
        ListNode_ *newListNode = new ListNode_(v);
        insertAt->next = newListNode;
	newListNode->prev = insertAt;
	insertAt = insertAt->next;
    }
    head_ = tmp.next;
    head_->prev = nullptr;
    tail_ = insertAt;
}

template <typename T>
List<T>::~List()
{
    while (!Empty()) {
       PopFront(); 
    }
}

template <typename T>
List<T>& List<T>::operator=(const List<T>& other)
{
    if (this == &other) {
        return *this;
    }

    List<T> tmpList = other;
    std::swap(head_, tmpList.head_);
    std::swap(tail_, tmpList.tail_);
    return *this;
}

template <typename T>
bool List<T>::Empty() const
{
    return nullptr == head_;
}

template <typename T>
size_t List<T>::Size() const
{
    size_t cnt = 0;
    for (ListNode_ *node = head_; node != nullptr; node = node->next) {
        ++cnt;
    }
    return cnt;
}

template <typename T>
void List<T>::PushFront(const T& val)
{
    ListNode_ *tmp = head_;
    head_ = new ListNode_(val);
    head_->next = tmp;
    if (nullptr != tmp) {
        tmp->prev = head_;
    }
    if (nullptr == tail_) {
        tail_ = head_;
    }
}

template <typename T>
void List<T>::PushFront(T&& val)
{
    ListNode_ *tmp = head_;
    head_ = new ListNode_(std::move(val));
    head_->next = tmp;
    if (nullptr != tmp) {
        tmp->prev = head_;
    }
    if (nullptr == tail_) {
        tail_ = head_;
    }
}

template <typename T>
void List<T>::PopFront()
{
    ListNode_ *tmp = head_;
    if (Empty()) {
        return;
    }
    head_ = head_->next;
    if (nullptr != head_) {
        head_->prev = nullptr;
    } else {
        tail_ = nullptr;
    }
    delete tmp;
}

template <typename T>
void List<T>::PushBack(const T& val)
{
    ListNode_ *tmp = tail_;
    tail_ = new ListNode_(val);
    tail_->prev = tmp;
    if (nullptr != tmp) {
        tmp->next = tail_;
    }
    if (nullptr == head_) {
        head_ = tail_;
    }
}

template <typename T>
void List<T>::PushBack(T&& val)
{
    ListNode_ *tmp = tail_;
    tail_ = new ListNode_(std::move(val));
    tail_->prev = tmp;
    if (nullptr != tmp) {
        tmp->next = tail_;
    }
    if (nullptr == head_) {
        head_ = tail_;
    }
}

template <typename T>
void List<T>::PopBack()
{
    if (Empty()) {
        return;
    }
    ListNode_ *tmp = tail_;
    tail_ = tail_->prev;
    if (nullptr != tail_) {
        tail_->next = nullptr;
    } else {
        head_ = nullptr;
    }
    delete tmp;
}


/*------------------------------------------*/
#include "list_iterator.hpp"

/*------------------------------------------*/
#include "list_reverse_iterator.hpp"

/*------------------------------------------*/
#include "list_const_iterator.hpp"

/*------------------------------------------*/
#include "list_const_reverse_iterator.hpp"

/*------------------------------------------*/
#include "list_utility.hpp"

#endif //_LIST_HPP_
