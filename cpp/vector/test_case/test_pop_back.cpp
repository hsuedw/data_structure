#include <iostream>

#include <vector.hpp>

/*
 * Test the default PopBack() of Array class.
 */

int main(int argc, char **argv)
{
    Vector<double> a;

    std::cout << "a is " << (a.Empty() ? "" : "not ") << "empty." << std::endl;
    std::cout << "a.Size() =  " << a.Size() << std::endl;
    std::cout << "a.Capacity() =  " << a.Capacity() << std::endl;

    a.PushBack(1.1);
    a.PushBack(2.2);
    a.PushBack(3.3);
    a.PushBack(4.4);
    a.PushBack(5.5);
    a.PushBack(6.6);
    std::cout << "size of a: " << a.Size() << std::endl;
    std::cout << "a: " << a << std::endl << std::endl;

    while (!a.Empty()) {
        std::cout << "run PopBack()" << std::endl;
        a.PopBack();
        std::cout << "size of a: " << a.Size() << std::endl;
        std::cout << "a: " << a << std::endl << std::endl;
    }

    a.PopBack();
    a.PopBack();
    a.PopBack();

    return 0;
}
