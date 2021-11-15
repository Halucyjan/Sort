#include <iostream>
#include <vector>
#include "Sort.h"

int main()
{
    std::vector<int> tab{10,7,15,6,17,8,19,20,5,23,3};
    Sorting sort1(tab);
    sort1.quickSort();
    sort1.print();

    //std::cin.get();
}