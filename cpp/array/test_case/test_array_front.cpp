#include <iostream>

#include <array.hpp>

/*
 * Test the Front() of Array class.
 */

int main(int argc, char **argv)
{
    Array<double, 5> a = {1.1, 2.2, 3.3, 4.4, 5.5};
    const Array<double, 5> b = {11.1, 22.2, 33.3, 44.4, 55.5};

    std::cout << "The first element of a: " << a.Front() << std::endl;
    std::cout << "The first element of b: " << b.Front() << std::endl;

    return 0;
}
