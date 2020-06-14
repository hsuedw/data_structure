#ifndef _FORWARD_LIST_HPP_
#define _FORWARD_LIST_HPP_

#include <utility>
#include <initializer_list>

template <typename T>
class ForwardList
{
public:
    ForwardList();
    ForwardList(const ForwardList<T>& other);
    ForwardList(const std::initializer_list<T> &other);
    ~ForwardList();
    ForwardList<T>& operator=(const ForwardList<T>& other);

    bool Empty();

    T& Front();
    const T& Front() const;

    void PushFront(const T& data);
    void PushFront(T&& data);
    void PopFront();

    class Iterator
    {
        friend ForwardList;
    public:
        bool operator!=(const Iterator& it);
        Iterator& operator++();
        T& operator*();
    private:
        Iterator(typename ForwardList::ListNode_* ptr);
        typename ForwardList::ListNode_* ptr_;
    };
    Iterator Begin();
    Iterator End();

    class ConstIterator
    {
        friend ForwardList;
    public:
        bool operator!=(const ConstIterator& it);
        ConstIterator& operator++();
        const T& operator*();
    private:
        ConstIterator(typename ForwardList::ListNode_* ptr);
        const typename ForwardList::ListNode_* ptr_;
    };
    ConstIterator CBegin();
    ConstIterator CEnd();
    ConstIterator Begin() const;
    ConstIterator End() const;

private:
    struct ListNode_
    {
        T data;
        ListNode_* next;
        ListNode_(const T& data) : data(data), next(nullptr) {}
        ListNode_(T&& data) : next(nullptr) {
            std::swap(this->data, data);
        }
    };

    ListNode_* head_;
    ListNode_* before_head_;
};

template <typename T>
ForwardList<T>::ForwardList() : head_(nullptr), before_head_(nullptr)
{
}

template <typename T>
ForwardList<T>::ForwardList(const ForwardList<T>& other)
{
    ListNode_ tmp(T{});
    ListNode_* insertAt = &tmp;
    for (ListNode_* copyFrom = other.head_; copyFrom != nullptr; copyFrom = copyFrom->next) {
        insertAt->next = new ListNode_(copyFrom->data);
        insertAt = insertAt->next;
    }
    head_ = tmp.next;
    before_head_ = new ListNode_(T{});
    before_head_->next = head_;
}

template <typename T>
ForwardList<T>::ForwardList(const std::initializer_list<T> &other)
{
    ListNode_ tmp(T{});
    ListNode_* insertAt = &tmp;
    for (const T& v: other) {
        insertAt->next = new ListNode_(v);
        insertAt = insertAt->next;
    }
    head_ = tmp.next;
    before_head_ = new ListNode_(T{});
    before_head_->next = head_;
}

template <typename T>
ForwardList<T>::~ForwardList()
{
    if (!Empty()) {
        PopFront();
    }
    delete before_head_;
}

template <typename T>
ForwardList<T>& ForwardList<T>::operator=(const ForwardList<T>& other)
{
    if (this == &other) {
        return *this;
    }

    ForwardList<T> tmpList = other;
    std::swap(head_, tmpList.head_);
    std::swap(before_head_, tmpList.before_head_);
    return *this;
}

template <typename T>
bool ForwardList<T>::Empty()
{
    return nullptr == head_;
}

template <typename T>
T& ForwardList<T>::Front()
{
    return head_->data;
}

template <typename T>
const T& ForwardList<T>::Front() const
{
    return head_->data;
}

template <typename T>
void ForwardList<T>::PushFront(const T& data)
{
    ListNode_* tmp = head_;
    head_ = new ListNode_(data);
    head_->next = tmp;
    if (nullptr == before_head_) {
        before_head_ = new ListNode_(T{});
    }
    before_head_->next = head_;
}

template <typename T>
void ForwardList<T>::PushFront(T&& data)
{
    ListNode_* tmp = head_;
    head_ = new ListNode_(std::move(data));
    head_->next = tmp;
    if (nullptr == before_head_) {
        before_head_ = new ListNode_(T{});
    }
    before_head_->next = head_;
}

template <typename T>
void ForwardList<T>::PopFront()
{
    ListNode_* tmp = head_;
    head_ = head_->next;
    before_head_ = head_;
    delete tmp;
}

/*------------------------------------------*/
#include "forward_list_iterator.hpp"

/*------------------------------------------*/
#include "forward_list_const_iterator.hpp"

/*------------------------------------------*/
#include "forward_list_utility.hpp"

#endif //_FORWARD_LIST_HPP_
