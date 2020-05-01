#include <iostream>

#include "array.hpp"


export
template <typename T, size_t N>
T& Array<T, N>::operator[](const size_t i) {
    return data_[i];
}

