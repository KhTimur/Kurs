#include <iostream>
#include <algorithm>
using namespace std;

//Слияние



void merge_sort(int * begi, int *en)
{
    int const N = std::distance(begi, en);
    if (N <= 1) return;
    int * const middle = std::next(begi, N / 2);
    merge_sort(begi, middle);
    merge_sort(middle, en);
    std::inplace_merge(begi, middle, en);
}

void print(int *begin, int *end)
{
    for (int *ptr  = begin; ptr != end; ptr++)
    {
        std::cout << *ptr << "   ";
    }
}

int main()
{
    int nums[] = { 2,9,3,1,5,7 };
    int *begi = std::begin(nums);
    int *en = end(nums);

    merge_sort(begi, en);
    print(begi,en);
    return 0;
}
