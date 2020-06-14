#include <iostream>

#include "forward_list.hpp"

int main(int argc, char **argv)
{
    ForwardList<double> a = {1.1, 1.2, 1.3, 1.4, 1.5, 1.6};
    std::cout << "a: " << a << std::endl;
    std::cout << "-------------------" << std::endl;

    ForwardList<double> b;
    b = a;
    std::cout << "b: " << b << std::endl;
    std::cout << "-------------------" << std::endl;

    return 0;
}
