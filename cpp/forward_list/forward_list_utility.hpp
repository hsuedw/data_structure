#ifndef _FORWARD_LIST_UTILITY_HPP_
#define _FORWARD_LIST_UTILITY_HPP_

#include <iostream>

#if 0
template <typename T>
std::ostream& operator<<(std::ostream& os, ForwardList<T>& li)
{
    os << "<";
    typename ForwardList<T>::Iterator it = li.Begin();
    while (it != li.End()) {
        os << *it;
        ++it;
        if (it != li.End()) {
            os << ", ";
        }
    }
    os << ">";
    return os;
}
#endif

#if 0
template <typename T>
std::ostream& operator<<(std::ostream& os, const ForwardList<T>& li)
{
    os << "<";
    typename ForwardList<T>::ConstIterator it = li.Begin();
    while (it != li.End()) {
        os << *it;
        ++it;
        if (it != li.End()) {
            os << ", ";
        }
    }
    os << ">";
    return os;
}
#endif

#if 0
template <typename T>
typename ForwardList<T>::Iterator begin(ForwardList<T>& container)
{
    return container.Begin();
}
#endif

#if 0
template <typename T>
typename ForwardList<T>::Iterator end(ForwardList<T>& container)
{
    return container.End();
}
#endif

#if 0
template <typename T>
typename ForwardList<T>::ConstIterator begin(const ForwardList<T>& container)
{
    return container.Begin();
}
#endif

#if 0
template <typename T>
typename ForwardList<T>::ConstIterator end(const ForwardList<T>& container)
{
    return container.End();
}
#endif


#endif //_FORWARD_LIST_UTILITY_HPP_
