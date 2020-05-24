#include <iostream>

#include <array.hpp>

/*
 * Test the iterator of Array class.
 */

int main(int argc, char **argv)
{
    Array<double, 5> a = {1.1, 2.2, 3.3, 4.4, 5.5};
    const Array<double, 5> b = {11.1, 22.2, 33.3, 44.4, 55.5};
    Array<double, 5> c = {1.1, 2.2, 3.3, 4.4, 5.5};

    std::cout << "=== test iterator ===" << std::endl;
    std::cout << "a: ";
    for (Array<double, 5>::Iterator it = a.Begin(); it != a.End(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    std::cout << std::endl << "=== test const iterator ===" << std::endl;
    std::cout << "b: ";
    for (Array<double, 5>::ConstIterator it = b.Begin(); it != b.End(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    std::cout << std::endl << "=== test operator==() ===" << std::endl;
    Array<double ,5>::Iterator itA1 = begin(a);
    Array<double ,5>::Iterator itA2 = a.Begin();
    Array<double ,5>::ConstIterator itB1 = begin(b);
    Array<double ,5>::ConstIterator itB2 = b.Begin();
    Array<double ,5>::Iterator itC1 = c.Begin();
    std::cout << "Is itA1 == itA2? " << (itA1 == itA2 ? "Yes." : "No.") << std::endl;
    std::cout << "Is itB1 == itB2? " << (itB1 == itB2 ? "Yes." : "No.") << std::endl;
    std::cout << "Is itA1 == itC1? " << (itA1 == itC1 ? "Yes." : "No.") << std::endl;

    std::cout << std::endl << "=== test operator!=() ===" << std::endl;
    std::cout << "Is itA1 != itA2? " << (itA1 != itA2 ? "Yes." : "No.") << std::endl;
    std::cout << "Is itB1 != itB2? " << (itB1 != itB2 ? "Yes." : "No.") << std::endl;
    std::cout << "Is itA1 != itC1? " << (itA1 != itC1 ? "Yes." : "No.") << std::endl;

    std::cout << std::endl << "=== test operator*() ===" << std::endl;
    std::cout << "*itA1 is " << (*itA1) << std::endl;
    *itA1 = 9.9;
    std::cout << "assign 9.9 to *itA1, *itA1 = " << (*itA1) << std::endl;
    *itA1 = 1.1;
#if 0
    *itB1 = 9.9; // compile error
#endif



    return 0;
}
