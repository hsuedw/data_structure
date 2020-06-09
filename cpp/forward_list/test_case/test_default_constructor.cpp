#include <iostream>

#include "forward_list.hpp"

int main(int argc, char **argv)
{
    ForwardList<double> a;
    std::cout << "a is" << (a.Empty() ? " " : " not ") << "empty." << std::endl;
    std::cout << "a: ";
    a.PrintForwardList();
    std::cout << std::endl;

    a.PushFront(1.1);
    a.PushFront(1.2);
    a.PushFront(1.3);
    a.PushFront(1.4);
    std::cout << "a is" << (a.Empty() ? " " : " not ") << "empty." << std::endl;
    a.PrintForwardList();
    std::cout << std::endl << "-------------------" << std::endl;

    ForwardList<double> b;
    std::cout << "b is" << (b.Empty() ? " " : " not ") << "empty." << std::endl;
    std::cout << "b: ";
    b.PrintForwardList();
    std::cout << std::endl;

    double x = 0.1;
    b.PushFront(x);
    x = 0.2;
    b.PushFront(x);
    x = 0.3;
    b.PushFront(x);
    x = 0.4;
    b.PushFront(x);
    x = 0.5;
    b.PushFront(x);
    b.PrintForwardList();
    std::cout << std::endl << "-------------------" << std::endl;


    return 0;
}
