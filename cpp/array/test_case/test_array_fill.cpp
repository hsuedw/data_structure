#include <iostream>

#include <array.hpp>

/*
 * Test the Fill() of Array class.
 */

int main(int argc, char **argv)
{
    Array<double, 5> a;

    a.Fill(12.34);

    std::cout << "a: " << a << std::endl;

    return 0;
}
