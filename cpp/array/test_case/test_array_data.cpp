#include <iostream>

#include <array.hpp>

/*
 * Test the Data() of Array class.
 */

int main(int argc, char **argv)
{
    Array<double, 5> a = {1.1, 2.2, 3.3, 4.4, 5.5};
    const Array<double, 5> b = {11.1, 22.2, 33.3, 44.4, 55.5};

    double *aPtr = a.Data();
    const double *bPtr = b.Data();

    std::cout << "The third element of a: " << *(a.Data() + 2) << std::endl;
    std::cout << "The third element of b: " << *(b.Data() + 2) << std::endl;

    return 0;
}
