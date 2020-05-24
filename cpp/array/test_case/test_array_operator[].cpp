#include <iostream>

#include <array.hpp>

/*
 * Test the operator[] of Array class.
 */

int main(int argc, char **argv)
{
    Array<double, 6> a = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6};
    const Array<double, 6> b = {11.1, 22.2, 33.3, 44.4, 55.5, 66.6};

    const size_t aSize = a.Size();
    const size_t bSize = b.Size();

    for (int i = 0; i < aSize; ++i) {
        std::cout << a[i] << " " ;
    }
    std::cout << std::endl;

    for (int i = 0; i < bSize; ++i) {
        std::cout << b[i] << " " ;
    }
    std::cout << std::endl;

    return 0;
}
