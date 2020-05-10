#ifndef _FORWARD_LIST_UTILITY_HPP_
#define _FORWARD_LIST_UTILITY_HPP_

#include <iostream>

template <typename T>
std::ostream& operator<<(std::ostream& os, ForwardList<T>& li)
{
    os << "<";
    typename ForwardList<T>::Iterator it = li.Begin();
    while (it != li.End()) {
        os << *it;
        ++it;
        if (it != li.End()) {
            os << " ";
        }
    }
    os << ">";
    return os;
}


#endif //_FORWARD_LIST_UTILITY_HPP_
