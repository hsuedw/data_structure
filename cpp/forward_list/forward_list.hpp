#ifndef _FORWARD_LIST_HPP_
#define _FORWARD_LIST_HPP_

template <typename T>
class ForwardList
{
public:
    ForwardList();
    ~ForwardList();

    bool Empty();
    void PushFront(const T& data);
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
private:
    struct ListNode_
    {
        T data;
        ListNode_* next;
        ListNode_(const T& data) : data(data), next(nullptr) {}
    };

    ListNode_* head_;
};

template <typename T>
ForwardList<T>::ForwardList() : head_(nullptr)
{
}

template <typename T>
ForwardList<T>::~ForwardList()
{
    if (!Empty()) {
        PopFront();
    }
}

template <typename T>
bool ForwardList<T>::Empty()
{
    return nullptr == head_;
}

template <typename T>
void ForwardList<T>::PushFront(const T& data)
{
    ListNode_* tmp = head_;
    head_ = new ListNode_(data);
    head_->next = tmp;
}

template <typename T>
void ForwardList<T>::PopFront()
{
    ListNode_* tmp = head_;
    head_ = head_->next;
    delete tmp;
}

/*------------------------------------------*/
#include "forward_list_iterator.hpp"

/*------------------------------------------*/
#include "forward_list_utility.hpp"

#endif //_FORWARD_LIST_HPP_
