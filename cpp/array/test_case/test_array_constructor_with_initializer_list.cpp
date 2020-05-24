#include <iostream>

#include <array.hpp>

/*
 * Test the constructor with initializer list
 * of Array class.
 */

int main(int argc, char **argv)
{
    Array<double, 5> a = {10.1, 20.1, 30.1, 40.1, 50.1};

    std::cout << "a: " << a << std::endl;

    return 0;
}
