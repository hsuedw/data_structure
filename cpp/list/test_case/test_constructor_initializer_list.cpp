#include <iostream>

#include "list.hpp"

int main(int argc, char **argv)
{
    std::cout << "Create a List object by using initializer list."  << std::endl;
    List<double> a = {1.1, 1.2, 1.3, 1.4, 1.5, 1.6};
    std::cout << "a: " << a << std::endl << std::endl;
#if 1
    std::cout << "Modify data in List object" << std::endl;
    List<double>::Iterator it1 = a.Begin();
    std::cout << "The data referenced by head: " << *it1 << std::endl;
    *it1 = 3.3;
    std::cout << "a: " << a << std::endl;
#endif
    std::cout << "Push front an element and push back an element." << std::endl;
    a.PushFront(3.4);
    a.PushBack(3.5);
    std::cout << "a: " << a << std::endl;
    std::cout << "The first elemnet is " << a.Front()
	      << " and the last element is " << a.Back() << "." << std::endl;
    std::cout << "Pop front an element and pop back an element." << std::endl;
    a.PopFront();
    a.PopBack();
    std::cout << "a: " << a << std::endl;
    std::cout << "The first elemnet is " << a.Front()
	      << " and the last element is " << a.Back() << "." << std::endl;
    std::cout << "-------------" << std::endl << std::endl;

    std::cout << "Create a const List object by using initializer list."  << std::endl;
    const List<double> b = {2.1, 2.2, 2.3, 2.4, 2.5, 2.6};
    std::cout << "b: " << b << std::endl;
    std::cout << "The first elemnet is " << b.Front()
	      << " and the last element is " << b.Back() << "." << std::endl;
#if 0
    // The data in const List cannot be modified.
    List<double>::ConstIterator cit2 = b.CBegin();
    std::cout << "The data referenced by head: " << *cit2 << std::endl;
    *cit2 = 4.4;
#endif
    std::cout << "-------------" << std::endl << std::endl;

    return 0;
}
