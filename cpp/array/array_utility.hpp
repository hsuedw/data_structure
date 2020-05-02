
#ifndef _ARRAY_UTILITY_HPP_
#define _ARRAY_UTILITY_HPP_

template <typename T, size_t N>
std::ostream& operator<<(std::ostream& os, const Array<T, N> &a)
{
    const size_t sz = a.Size();
    os << "[";
    for (size_t i = 0; i < sz; ++i) {
        os << a[i];
        if (i < sz - 1) {
            os << ", ";
        }
    }
    os << "]";
    return os;
}

template <typename T, size_t N>
typename Array<T, N>::Iterator begin(Array<T, N>& cont)
{
    return cont.Begin();
}

template <typename T, size_t N>
typename Array<T, N>::Iterator end(Array<T, N>& cont)
{
    return cont.End();
}

template <typename T, size_t N>
typename Array<T, N>::ConstIterator begin(const Array<T, N>& cont)
{
    return cont.Begin();
}

template <typename T, size_t N>
typename Array<T, N>::ConstIterator end(const Array<T, N>& cont)
{
    return cont.End();
}

#endif // _ARRAY_UTILITY_HPP_
