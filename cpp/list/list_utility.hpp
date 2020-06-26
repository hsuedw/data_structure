#ifndef _LIST_UTILITY_HPP_
#define _LIST_UTILITY_HPP_

#include <iostream>

template <typename T>
std::ostream& operator<<(std::ostream& os, List<T>& list)
{
    os << "<<";
    typename List<T>::Iterator it = list.Begin();
    while (it != list.End()) {
        os << *it;
        ++it;
        if (it != list.End()) {
            os << ", ";
        }
    }
    os << ">>";
    return os;
}

template <typename T>
std::ostream& operator<<(std::ostream& os, const List<T>& list)
{
    os << "<<";
    typename List<T>::ConstIterator cit = list.CBegin();
    while (cit != list.CEnd()) {
        os << *cit;
        ++cit;
        if (cit != list.CEnd()) {
            os << ", ";
        }
    }
    os << ">>";
    return os;
}


#endif // _LIST_UTILITY_HPP_ 
