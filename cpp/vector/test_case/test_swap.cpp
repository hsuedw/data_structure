#include <iostream>

#include <vector.hpp>

/*
 * Test the default constructor, PushBack()
 * and Size() of Array class.
 */

int main(int argc, char **argv)
{
    Vector<double> a;
    a.PushBack(1.1);
    a.PushBack(2.2);
    a.PushBack(3.3);
    a.PushBack(4.4);
    a.PushBack(5.5);
    a.PushBack(6.6);
    std::cout << "size of a: " << a.Size() << std::endl;
    std::cout << "a: " << a << std::endl;

    Vector<double> b;
    b.PushBack(11.1);
    b.PushBack(22.2);
    b.PushBack(33.3);
    b.PushBack(44.4);
    std::cout << "size of b: "  << b.Size() << std::endl;
    std::cout << "b: " << b << std::endl << std::endl;

    std::cout << "run Swap()" << std::endl << std::endl;
    a.Swap(b);
    std::cout << "size of a: " << a.Size() << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "size of b: "  << b.Size() << std::endl;
    std::cout << "b: " << b << std::endl << std::endl;

    return 0;
}
