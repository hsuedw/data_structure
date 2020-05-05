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
    std::cout << "-------------------" << std::endl;

    Vector<int> d;
    if (d.Empty()) {
        std::cout << "d is empty." << std::endl;
    } else {
        std::cout << "d is not empty." << std::endl;
    }
    if (a.Empty()) {
        std::cout << "a is empty." << std::endl;
    } else {
        std::cout << "a is not empty." << std::endl;
    }
    std::cout << "-------------------" << std::endl;

    std::cout << "b capacity is " << b.Capacity() << std::endl;
    b.Reserve(7);
    std::cout << "b capacity is " << b.Capacity() << std::endl;
    b.Reserve(100);
    std::cout << "b capacity is " << b.Capacity() << std::endl;
    for (size_t i = 0; i < b.Size(); ++i) {
        std::cout << i << ", " << b[i] << std::endl;
    }
    std::cout << "-------------------" << std::endl;

    const Vector<double> e = {1.1, 2.2, 3.3, 4.4, 5.5};
    std::cout << "a front: " << a.Front() << std::endl;
    std::cout << "e front: " << e.Front() << std::endl;
    std::cout << "a back: " << a.Back() << std::endl;
    std::cout << "e back: " << e.Back() << std::endl;
    std::cout << "-------------------" << std::endl;

    a = e;
    std::cout << "a: ";
    for (size_t i = 0; i < a.Size(); ++i) {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl << "-------------------" << std::endl;

    Vector<double> f = {11.1, 22.2, 33.3, 44.4, 55.5};
    a = std::move(f);    
    std::cout << "a: ";
    for (size_t i = 0; i < a.Size(); ++i) {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl << "-------------------" << std::endl;
    std::cout << "f: ";
    for (size_t i = 0; i < f.Size(); ++i) {
        std::cout << f[i] << " ";
    }
    std::cout << std::endl << "-------------------" << std::endl;

    return 0;
}
