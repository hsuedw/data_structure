#include <iostream>

#include <vector.hpp>

/*
 * Test the default Clear() of Vector class.
 */

int main(int argc, char **argv)
{
    Vector<double> a;
    a.PushBack(1.1);
    a.PushBack(2.2);
    a.PushBack(3.3);
    a.PushBack(4.4);
    a.PushBack(5.5);
    a.PushBack(6.6);
    std::cout << "size of a: " << a.Size() << std::endl;
    std::cout << "a: " << a << std::endl << std::endl;

    std::cout << "run Clear()" << std::endl << std::endl;
    a.Clear();
    std::cout << "size of a: " << a.Size() << std::endl;
    std::cout << "a: " << a << std::endl;

    return 0;
}
