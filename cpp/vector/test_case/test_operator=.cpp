#include <iostream>

#include <vector.hpp>

/*
 * Test the operator=() for Vector class.
 */

int main(int argc, char **argv)
{
    Vector<double> a = {1.1, 1.2, 1.3, 1.4};
    std::cout << "a.Size() =  " << a.Size() << std::endl;
    std::cout << "a.Capacity() =  " << a.Capacity() << std::endl;
    std::cout << "a: " << a << std::endl << std::endl;

    const Vector<double> b = {1.5, 1.6, 1.7, 1.8};
    std::cout << "b.Size() =  " << b.Size() << std::endl;
    std::cout << "b.Capacity() =  " << b.Capacity() << std::endl;
    std::cout << "b: " << a << std::endl << std::endl;

    Vector<double> c, d, e, f;

    c = a;
    std::cout << "c.Size() =  " << c.Size() << std::endl;
    std::cout << "c.Capacity() =  " << c.Capacity() << std::endl;
    std::cout << "c: " << c << std::endl << std::endl;

    d = b;
    std::cout << "d.Size() =  " << d.Size() << std::endl;
    std::cout << "d.Capacity() =  " << d.Capacity() << std::endl;
    std::cout << "d: " << d << std::endl << std::endl;

    e = {2.1, 2.2, 2.3, 2.4, 2.5};
    std::cout << "e.Size() =  " << e.Size() << std::endl;
    std::cout << "e.Capacity() =  " << e.Capacity() << std::endl;
    std::cout << "e: " << e << std::endl << std::endl;

    std::cout << "move c to f" << std::endl;
    f = std::move(c);
    std::cout << "c.Size() =  " << c.Size() << std::endl;
    std::cout << "c.Capacity() =  " << c.Capacity() << std::endl;
    std::cout << "c: " << c << std::endl;
    std::cout << "f.Size() =  " << f.Size() << std::endl;
    std::cout << "f.Capacity() =  " << f.Capacity() << std::endl;
    std::cout << "f: " << f << std::endl << std::endl;

    return 0;
}
