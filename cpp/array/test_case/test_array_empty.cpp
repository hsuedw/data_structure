#include <iostream>

#include <array.hpp>

/*
 * Test the Empty()  of Array class.
 */

int main(int argc, char **argv)
{
    Array<double, 6> a;
    const Array<double, 6> b;
    Array<double, 0> c;
    const Array<double, 0> d;

    std::cout << "Is a empty? : " << (a.Empty() ? "Yes" : "No") << std::endl;
    std::cout << "Is b empty? : " << (b.Empty() ? "Yes" : "No") << std::endl;
    std::cout << "Is c empty? : " << (c.Empty() ? "Yes" : "No") << std::endl;
    std::cout << "Is d empty? : " << (d.Empty() ? "Yes" : "No") << std::endl;

    return 0;
}
