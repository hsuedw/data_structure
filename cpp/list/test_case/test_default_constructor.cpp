#include <iostream>

#include "list.hpp"

int main(int argc, char **argv)
{
    List<double> a;
    a.PushFront(1.1);
    a.PushFront(1.2);
    a.PushFront(1.3);
    a.PushFront(1.4);
    a.PushFront(1.5);
    a.PushFront(1.6);
    std::cout << "a: " << a;
    std::cout << std::endl << "-------------" << std::endl;

    List<double> b;
    double value = 2.1;
    b.PushFront(value);
    value = 2.2;
    b.PushFront(value);
    value = 2.3;
    b.PushFront(value);
    value = 2.4;
    b.PushFront(value);
    value = 2.5;
    b.PushFront(value);
    value = 2.6;
    b.PushFront(value);
    std::cout << "b: " << b;
    std::cout << std::endl << "-------------" << std::endl;

    return 0;
}
