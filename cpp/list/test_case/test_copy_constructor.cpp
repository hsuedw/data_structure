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

    const List<double> c = a;
    std::cout << "c (const): " << c;
    std::cout << std::endl << "Move forward from head (const iterator)." << std::endl;
    for (List<double>::ConstIterator cit = c.CBegin(); cit != c.CEnd(); ++cit) {
        std::cout << *cit << std::endl;
    }
    std::cout << std::endl << "Move backward from tail (const iterator)." << std::endl;
    for (List<double>::ConstReverseIterator crit = b.CRBegin(); crit != b.CREnd(); ++crit) {
        std::cout << *crit << std::endl;
    }
    std::cout << std::endl << "-------------" << std::endl;


    return 0;
}
