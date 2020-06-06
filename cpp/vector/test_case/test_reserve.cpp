#include <iostream>

#include <vector.hpp>

/*
 * Test the default Reserve() of Vector class.
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
    a.PushBack(7.7);
    std::cout << "size of a: " << a.Size() << std::endl;
    std::cout << "capacity of a: " << a.Capacity() << std::endl;
    std::cout << "a: " << a << std::endl << std::endl;

    std::cout << "Run reserver() to set capacity to 20." << std::endl;
    a.Reserve(20);
    std::cout << "capacity of a: " << a.Capacity() << std::endl << std::endl;

    std::cout << "Add two more elements." << std::endl;
    a.PushBack(8.8);
    a.PushBack(9.9);
    std::cout << "size of a: " << a.Size() << std::endl;
    std::cout << "capacity of a: " << a.Capacity() << std::endl;
    std::cout << "a: " << a << std::endl << std::endl;

    return 0;
}
