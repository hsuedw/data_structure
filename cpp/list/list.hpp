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
    ~List();

    bool Empty() const;
    void PushFront(const T& val);
    void PushFront(T&& val);
    void PopFront();

    class Iterator
    {
        friend List;
    public:
        bool operator!=(const Iterator& it);
	Iterator& operator++();
	T& operator*();
    private:
	Iterator(typename List::ListNode_ *ptr);
        typename List::ListNode_ *ptr_;
    };
    Iterator Begin();
    Iterator End();

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
    ConstIterator CBegin();
    ConstIterator CEnd();
    ConstIterator Begin() const;
    ConstIterator End() const;

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
List<T>::~List()
{
    while (!Empty()) {
       PopFront(); 
    }
}


template <typename T>
bool List<T>::Empty() const
{
    return nullptr == head_;
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

/*------------------------------------------*/
#include "list_iterator.hpp"

/*------------------------------------------*/
#include "list_const_iterator.hpp"

/*------------------------------------------*/
#include "list_utility.hpp"

#endif //_LIST_HPP_
