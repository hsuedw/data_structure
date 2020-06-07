#include <iostream>

#include <vector.hpp>

/*
 * Test iterator of Vector class.
 */

int main(int argc, char **argv)
{
    std::cout << "a (iterator): ";
    Vector<double> a = {1.1, 1.2, 1.3, 1.4, 1.5};
    for (Vector<double>::Iterator it = a.Begin(); it != a.End(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl << "-------------------" << std::endl;

    std::cout << "a (const iterator): ";
    for (Vector<double>::ConstIterator it = a.CBegin(); it != a.CEnd(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl << "-------------------" << std::endl;

    std::cout << "b (const iterator for const vector): ";
    const Vector<double> b = {2.1, 2.2, 2.3, 2.4, 2.5};
    for (Vector<double>::ConstIterator it = b.CBegin(); it != b.CEnd(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl << "-------------------" << std::endl;

    std::cout << "b (const iterator for const vector): ";
    for (Vector<double>::ConstIterator it = b.Begin(); it != b.End(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl << "-------------------" << std::endl;

    std::cout << "a: ";
    for (auto &v: a) {
        std::cout << v << " ";
    }
    std::cout << std::endl << "-------------------" << std::endl;

    std::cout << "b: ";
    for (auto &v: b) {
        std::cout << v << " ";
    }
    std::cout << std::endl << "-------------------" << std::endl;

    return 0;
}
