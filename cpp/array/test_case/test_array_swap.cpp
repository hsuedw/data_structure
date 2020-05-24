#include <iostream>

#include <array.hpp>

/*
 * Test the Swap() of Array class.
 */

int main(int argc, char **argv)
{
    Array<double, 5> a = {1.1, 2.2, 3.3, 4.4, 5.5};
    Array<double, 5> b = {11.1, 22.2, 33.3, 44.4, 55.5};

    std::cout << "=== before swap ===" << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;

    a.Swap(b);

    std::cout << "=== after swap ===" << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;

    return 0;
}
