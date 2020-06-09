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

    ForwardList<int> liB = li;
    std::cout << "liB: " << liB;
    std::cout << std::endl << "-------------------" << std::endl;

    ForwardList<int> liC;
    liC = li;
    std::cout << "liC: " << liC;
    std::cout << std::endl << "-------------------" << std::endl;

    const ForwardList<int> liD = li;
    std::cout << "liD: ";
    for (auto &v: liD) {
        std::cout << v << " ";
    }
    std::cout << std::endl << "-------------------" << std::endl;
    //ForwardList<int>::ConstIterator cit1 = li1.Begin();

    ForwardList<double> liE = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6};
    std::cout << "liE: " << liE;
    std::cout << std::endl << "-------------------" << std::endl;
 
    const ForwardList<double> liF = {9.1, 9.2, 9.3, 9.4, 9.5, 9.6};
    std::cout << "liF: " << liF;
    std::cout << std::endl << "-------------------" << std::endl;

    std::cout << "li front = " << li.Front() << std::endl;
    std::cout << "liF front = " << liF.Front() << std::endl;
    std::cout << "-------------------" << std::endl;

    double hi = 0.8;
    liE.PushFront(std::move(hi));
    std::cout << "liE: " << liE;
    std::cout << std::endl << "-------------------" << std::endl;
    std::cout << "hi: " << hi << std::endl;

    return 0;
}
