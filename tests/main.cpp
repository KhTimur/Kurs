#include <iostream>
#include <quick.h>
#include <iterator>



void print(int *begin, int *end)
{
    for (int *ptr  = begin; ptr != end; ptr++)
    {
        std::cout << *ptr << "   ";
    }
}


int main()
{
     int nums[] = { 9,1,7,2,5,8,3,6,4 };
    int *begi = std::begin(nums);
    int *en = end(nums);
    quick_sort(begi, en);
    print(begi,en);
    return 0;
}
