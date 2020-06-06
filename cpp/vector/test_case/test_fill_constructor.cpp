#include <iostream>

#include <vector.hpp>

/*
 * Test the fill constructor and operator[]() 
 * of Vector class.
 */

int main(int argc, char **argv)
{
    Vector<double> a(8);

    std::cout << "a is " << (a.Empty() ? "" : "not ") << "empty." << std::endl;
    std::cout << "a.Size() =  " << a.Size() << std::endl;
    std::cout << "a.Capacity() =  " << a.Capacity() << std::endl;
    std::cout << "a: " << a << std::endl << std::endl;

    std::cout << "Add two more elements." << std::endl;
    a.PushBack(9.9);
    a.PushBack(10.1);
    std::cout << "a.Size() =  " << a.Size() << std::endl;
    std::cout << "a.Capacity() =  " << a.Capacity() << std::endl;
    std::cout << "a: " << a << std::endl << std::endl;

    std::cout << "Assign values to the first eight elements." << std::endl;
    a[0] = 1.1;
    a[1] = 2.2;
    a[2] = 3.3;
    a[3] = 4.4;
    a[4] = 5.5;
    a[5] = 6.6;
    a[6] = 7.7;
    a[7] = 8.8;
    std::cout << "a.Size() =  " << a.Size() << std::endl;
    std::cout << "a.Capacity() =  " << a.Capacity() << std::endl;
    std::cout << "a: " << a << std::endl << std::endl;

    //a[11] = 8.8;

    Vector<int> b(8, 5);
    std::cout << "b.Size() =  " << b.Size() << std::endl;
    std::cout << "b.Capacity() =  " << b.Capacity() << std::endl;
    std::cout << "b: " << b << std::endl << std::endl;

    return 0;
}
