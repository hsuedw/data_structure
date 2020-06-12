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
    std::cout << a << std::endl;
    std::cout << "The first element is " << a.Front() << "." << std::endl;
    std::cout << "-------------------" << std::endl;

    std::cout << "run PopFront()" << std::endl;
    a.PopFront();
    std::cout << a << std::endl;
    std::cout << "The first element is " << a.Front() << "." << std::endl;
    std::cout << "-------------------" << std::endl;

    return 0;
}
