#include <iostream>

#include "array.hpp"


int main(int argc, char **argv)
{
    Array<double, 5> a;

    for (size_t i = 0; i < a.Size(); ++i) {
        a[i] = i + 10.5;
    }
    std::cout << "a: " << a << std::endl;
    std::cout << a.Front() << ", " << a.Back(); 
    std::cout << std::endl << "-------------" << std::endl;

    const Array<double, 5> b = {10.1, 20.1, 30.1, 40.1, 50.1};
    for (size_t i = 0; i < b.Size(); ++i) {
        std::cout << b[i] << " ";
    }
    std::cout << "b: " << b << std::endl;
    std::cout << b.Front() << ", " << b.Back(); 
    std::cout << std::endl << "-------------" << std::endl;

    Array<double, 0> c;
    std::cout << a.Empty() << std::endl;
    std::cout << c.Empty() << std::endl;
    //std::cout << c[0] << std::endl;
    std::cout << "c: " << c << std::endl;
    std::cout << "-------------" << std::endl;
    
    double *ptrA = a.Data();
    for (size_t i = 0; i < a.Size(); ++i) {
        std::cout << *(ptrA + i) << " ";
    }
    std::cout << std::endl;
    const double *ptrB = b.Data();
    for (size_t i = 0; i < b.Size(); ++i) {
        std::cout << *(ptrB + i) << " ";
    }
    std::cout << std::endl << "-------------" << std::endl;

    a.Fill(100.9);
    std::cout << "a: " << a << std::endl;
    std::cout << "-------------" << std::endl;

    Array<double, 5> d = {11.1, 22.2, 33.3, 44.4, 55.5, 66.6, 77.7};
    std::cout << "a: " << a << std::endl;
    std::cout << "d: " << d << std::endl;
    d.Swap(a);
    std::cout << "a: " << a << std::endl;
    std::cout << "d: " << d << std::endl;
    std::cout << "-------------" << std::endl;

    Array<double, 5>::Iterator it = d.Begin();
    *it = 123.4;
    for (; it != d.End(); it++) {
        std::cout << *it << " ";
    }
    std::cout << std::endl << "-------------------" << std::endl;

    Array<double, 5>::ConstIterator constIt = a.CBegin();
    //*it = 123.4;
    for (; constIt != a.CEnd(); constIt++) {
        std::cout << *constIt << " ";
    }
    std::cout << std::endl << "-------------------" << std::endl;


    return 0;
}
