#include <iostream>

#include "forward_list.hpp"

int main(int argc, char **argv)
{
    ForwardList<double> a;
    a.PushFront(1.1);
    a.PushFront(1.2);
    a.PushFront(1.3);
    a.PushFront(1.4);
    a.PushFront(1.5);
    a.PushFront(1.6);
    std::cout << "a: " << a << std::endl;
    std::cout << "-------------------" << std::endl;

    ForwardList<double> b = a;
    std::cout << "b: " << b << std::endl;
    std::cout << "-------------------" << std::endl;

    const ForwardList<double> c = a;
    std::cout << "c (const): " << c << std::endl;
    std::cout << "-------------------" << std::endl;

    return 0;
}
