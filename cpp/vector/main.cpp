#include <iostream>

#include "vector.hpp"

int main(int argc, char **argv)
{
    Vector<double> a;
    a.PushBack(1.1);
    a.PushBack(2.2);
    a.PushBack(3.3);
    a.PushBack(4.4);
    a.PushBack(5.5);
    for (int i = 0; i < a.Size(); ++i) {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl << "-------------------" << std::endl;
  

    return 0;
}
