#include <iostream>

#include <array.hpp>

/*
 * Test the default constructor, operator[] and operator<<()
 * of Array class.
 */

int main(int argc, char **argv)
{
    Array<double, 5> a;

    for (size_t i = 0; i < a.Size(); ++i) {
        a[i] = i + 10.5;
    }
    std::cout << "a: " << a << std::endl;

    return 0;
}
