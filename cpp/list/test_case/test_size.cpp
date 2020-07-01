#include <iostream>

#include "list.hpp"

int main(int argc, char **argv)
{
    std::cout << "Create a List object by using initializer list."  << std::endl;
    List<double> a = {1.1, 1.2, 1.3, 1.4, 1.5, 1.6};
    std::cout << "a: " << a << std::endl;
    std::cout << "The size of a is " << a.Size() << "." << std::endl << std::endl;
    std::cout << "Push front two elements and push back two elements."  << std::endl;
    a.PushFront(1.7);
    a.PushFront(1.8);
    a.PushBack(1.9);
    a.PushBack(1.11);
    std::cout << "a: " << a << std::endl;
    std::cout << "The size of a becomes " << a.Size() << "." << std::endl << std::endl;
    std::cout << "Pop front one element and pop back one element."  << std::endl;
    a.PopFront();
    a.PopBack();
    std::cout << "a: " << a << std::endl;
    std::cout << "The size of a becomes " << a.Size() << "." << std::endl;
    std::cout << "-------------" << std::endl << std::endl;

    std::cout << "Create a const List object by using the copy constructor."  << std::endl;
    const List<double> b = a;
    std::cout << "b: " << b << std::endl;
    std::cout << "The size of b is " << b.Size() << "." << std::endl;
    //b.PushFront(2.1);
    //b.PushBack(2.1);
    //b.PopFront();
    //b.PopBack();
    std::cout << "-------------" << std::endl << std::endl;

    return 0;
}
