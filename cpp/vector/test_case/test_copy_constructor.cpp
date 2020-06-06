#include <iostream>

#include <vector.hpp>

/*
 * Test the copy constructor of Vector class.
 */

int main(int argc, char **argv)
{
    Vector<double> a = {1.1, 1.2, 1.3, 1.4, 1.5};
    std::cout << "a.Size() =  " << a.Size() << std::endl;
    std::cout << "a.Capacity() =  " << a.Capacity() << std::endl;
    std::cout << "a: " << a << std::endl << std::endl;

    std::cout << "copy constructor" << std::endl;
    Vector<double> b = a;
    std::cout << "a.Size() =  " << a.Size() << std::endl;
    std::cout << "a.Capacity() =  " << a.Capacity() << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "b.Size() =  " << b.Size() << std::endl;
    std::cout << "b.Capacity() =  " << b.Capacity() << std::endl;
    std::cout << "b: " << b << std::endl << std::endl;

    std::cout << "copy constructor (move)" << std::endl;
    Vector<double> c = std::move(a);
    std::cout << "a.Size() =  " << a.Size() << std::endl;
    std::cout << "a.Capacity() =  " << a.Capacity() << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "c.Size() =  " << c.Size() << std::endl;
    std::cout << "c.Capacity() =  " << c.Capacity() << std::endl;
    std::cout << "c: " << c << std::endl << std::endl;

    return 0;
}
