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
    std::cout << "a: " << a << std::endl;
    std::cout << std::endl << "Assign the data of list a to list b." << std::endl;
    List<double> b;
    b = a;
    std::cout << "b: " << b << std::endl;
    std::cout << "-------------" << std::endl;


    return 0;
}
