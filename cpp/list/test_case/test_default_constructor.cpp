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
    for (List<double>::Iterator it = a.Begin(); it != a.End(); ++it) {
        std::cout << *it << " ";
    }
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
    b.PrintList();
    std::cout << "-------------" << std::endl;

    return 0;
}
