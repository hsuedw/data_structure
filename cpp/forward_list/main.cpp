#include <iostream>

#include "forward_list.hpp"

int main(int argc, char **argv)
{
    ForwardList<int> li;
    std::cout << li << std::endl;
    li.PushFront(1);
    std::cout << li << std::endl;
    li.PushFront(2);
    std::cout << li << std::endl;
    li.PushFront(3);
    std::cout << li << std::endl;
    li.PushFront(4);
    std::cout << li << std::endl;

    return 0;
}
