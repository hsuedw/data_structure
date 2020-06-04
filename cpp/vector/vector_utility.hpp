
#ifndef _VECTOR_UTILITY_HPP_
#define _VECTOR_UTILITY_HPP_

#include <iostream>

template <typename T>
std::ostream& operator<<(std::ostream& os, const Vector<T>& vec)
{
    const size_t sz = vec.Size();
    os << "[[";
    for (size_t i = 0; i < sz; ++i) {
        os << vec[i];
        if (i < sz - 1) {
            os << ", ";
        }
    }
    os << "]]";
    return os;
}

#if 0
template <typename T>
typename Vector<T>::Iterator begin(Vector<T>& container)
{
    return container.Begin();
}

template <typename T>
typename Vector<T>::Iterator end(Vector<T>& container)
{
    return container.End();
}

template <typename T>
typename Vector<T>::ConstIterator begin(const Vector<T>& container)
{
    return container.Begin();
}

template <typename T>
typename Vector<T>::ConstIterator end(const Vector<T>& container)
{
    return container.End();
}
#endif

#endif // _VECTOR_UTILITY_HPP_
