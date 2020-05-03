#include <iostream>

#include "vector.hpp"

int main(int argc, char **argv)
{
    Vector<double> a;
    a.PushBack(1.1);
    a.PushBack(2.2);
    a.PushBack(3.3);
    a.PushBack(4.4);
    a.PushBack(5.5);
    a.PushBack(6.6);
    a.PushBack(7.7);
    a.PushBack(8.8);
    a.PushBack(9.9);
    a.PushBack(10.10);
    a.PushBack(11.11);
    std::cout << a.Size() << std::endl;
    for (size_t i = 0; i < a.Size(); ++i) {
        std::cout << i << ", " << a[i] << std::endl;
    }
    std::cout << std::endl << "-------------------" << std::endl;

    a.Resize(0);
    std::cout << a.Size() << std::endl;
    for (size_t i = 0; i < a.Size(); ++i) {
        std::cout << i << ", " << a[i] << std::endl;
    }
    std::cout << std::endl << "-------------------" << std::endl;

    double x = 123.456;
    double y = 223.456;
    a.PushBack(x);
    a.PushBack(y);
    std::cout << a.Size() << std::endl;
    for (size_t i = 0; i < a.Size(); ++i) {
        std::cout << i << ", " << a[i] << std::endl;
    }
    std::cout << std::endl << "-------------------" << std::endl;

    Vector<int> b = {1, 2, 3, 4, 5};
    std::cout << b.Size() << std::endl;
    for (size_t i = 0; i < b.Size(); ++i) {
        std::cout << i << ", " << b[i] << std::endl;
    }
    std::cout << std::endl << "-------------------" << std::endl;

    Vector<int> c = b;
     std::cout << c.Size() << std::endl;
    for (size_t i = 0; i < c.Size(); ++i) {
        std::cout << i << ", " << c[i] << std::endl;
    }
    std::cout << std::endl << "-------------------" << std::endl;


    return 0;
}
