#include <iostream>

#include <vector.hpp>

/*
 * Test the initializer list constructor
 * and copy constructor.
 */

int main(int argc, char **argv)
{
    Vector<double> a = {1.1, 1.2, 1.3, 1.4};
    std::cout << "a.Size() =  " << a.Size() << std::endl;
    std::cout << "a.Capacity() =  " << a.Capacity() << std::endl;
    std::cout << "a: " << a << std::endl << std::endl;

    Vector<double> b = a;
    std::cout << "b.Size() =  " << b.Size() << std::endl;
    std::cout << "b.Capacity() =  " << b.Capacity() << std::endl;
    std::cout << "b: " << a << std::endl << std::endl;

    return 0;
}
