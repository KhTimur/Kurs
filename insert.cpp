#include <iostream>
#include <iterator>

using namespace std;

// Сортировка вставками

void vec(int * begi, int *en)
{
    for(int *ptr  = begi; ptr != en; ptr++)
        for(int *j=ptr; *j != *begi && *(j-1)>*j;j--)
			{
			   swap(*(j-1),*j);
            }
}

void print(int *begin, int *end)
{
    for (int *ptr  = begin; ptr != end; ptr++)
    {
        std::cout << *ptr << "\t";
    }
}

int main()
{
   int nums[] = { 2,9,3,1,5,7 };
    int *begi = std::begin(nums);
    int *en = end(nums);

    vec(begi, en);

    print(begi,en);
    return 0;
}
