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

    std::cout << "Use copy constructor to copy List a to List b." << std::endl;
    List<double> b = a;
    std::cout << "b: " << b;
    std::cout << std::endl << "Move forward from head." << std::endl;
    for (List<double>::Iterator it = b.Begin(); it != b.End(); ++it) {
        std::cout << *it << std::endl;
    }
    std::cout << std::endl << "Move backward from tail." << std::endl;
    for (List<double>::ReverseIterator rit = b.RBegin(); rit != b.REnd(); ++rit) {
        std::cout << *rit << std::endl;
    }
    std::cout << std::endl << "-------------" << std::endl;

    return 0;
}
