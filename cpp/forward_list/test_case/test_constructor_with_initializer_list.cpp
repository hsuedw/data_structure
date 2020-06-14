#include <iostream>

#include "forward_list.hpp"

int main(int argc, char **argv)
{
    ForwardList<double> a = {1.1, 1.2, 1.3, 1.4, 1.5};
    std::cout << "a: " << a << std::endl;
    std::cout << "The first element is " << a.Front() << "." << std::endl;
    std::cout << "-------------------" << std::endl;

    std::cout << "run PushFront()" << std::endl;
    a.PushFront(1.6);
    a.PushFront(1.7);
    std::cout << "a: " << a << std::endl;
    std::cout << "The first element is " << a.Front() << "." << std::endl;
    std::cout << "-------------------" << std::endl;

    return 0;
}
