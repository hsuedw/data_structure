#include <iostream>

#include <vector.hpp>

/*
 * Test the default constructor, PushBack()
 * and Size() of Vector class.
 */

int main(int argc, char **argv)
{
    Vector<double> a;

    std::cout << "a is " << (a.Empty() ? "" : "not ") << "empty." << std::endl;
    std::cout << "a.Size() =  " << a.Size() << std::endl;
    std::cout << "a.Capacity() =  " << a.Capacity() << std::endl;

    a.PushBack(1.1);
    a.PushBack(2.2);
    a.PushBack(3.3);
    a.PushBack(4.4);
    a.PushBack(5.5);
    a.PushBack(6.6);
    std::cout << "size of a: " << a.Size() << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "the first element: " << a.Front() << ", the last element: " << a.Back() << std::endl;
    std::cout << "-------------" << std::endl;

    Vector<double> b;
    double val = 11.1;
    b.PushBack(val);
    val = 22.2;
    b.PushBack(val);
    val = 33.3;
    b.PushBack(val);
    val = 44.4;
    b.PushBack(val);
    val = 55.5;
    b.PushBack(val);
    val = 66.6;
    b.PushBack(val);
    std::cout << "size of b: "  << b.Size() << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "the first element: " << b.Front() << ", the last element: " << b.Back() << std::endl;

    return 0;
}
