#include <iostream>

#include <array.hpp>

/*
 * Test the Size() Array class.
 */

int main(int argc, char **argv)
{
    Array<double, 6> a = {1.1, 2.1, 3.1, 4.1, 5.1, 6.1};
    const Array<double, 5> b = {1.1, 2.1, 3.1, 4.1, 5.1};

    std::cout << "size of a: " << a.Size() << std::endl;
    std::cout << "size of b: " << b.Size() << std::endl;

    return 0;
}
