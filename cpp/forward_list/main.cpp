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
    std::cout << "-------------------" << std::endl;

    ForwardList<int>::ConstIterator cit = li.CBegin();
    for (; cit != li.CEnd(); ++cit) {
        std::cout << *cit << " ";
    }
    std::cout << std::endl << "-------------------" << std::endl;

    for (ForwardList<int>::Iterator it = begin(li); it != end(li); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    for (auto v: li) {
        std::cout << v << " ";
    }
    std::cout << std::endl << "-------------------" << std::endl;

    //const ForwardList<int> li1;
    //ForwardList<int>::ConstIterator cit1 = li1.Begin();


    return 0;
}
