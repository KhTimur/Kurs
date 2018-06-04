#include <iostream>

using namespace std;


void downHeap(int * t, int * en) {
  int const siz = std::distance(t, en);
  int *k= en-(siz/2)-1;
    while (k>=t)
    {
        int a=std::distance(t, k);
        if(*k> *(k+a))
            {
                swap(*k,*(k+a));
            }
        if(*k>*(k+a+1) && (k+a+1)!=en)
            {
                swap(*k,*(k+a+1));
            }
        k--;
    }
}




void heapSort(int *begi , int *en)
{

    int *t=begi;
    while(t<en)
    {
        downHeap(t, en);
        t++;
    }
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
    int nums[] = { 9,1,7,2,5,8,3,6,4 };
    int *begi = std::begin(nums);
    int *en = end(nums);
    heapSort(begi , en);
    print(begi,en);
    return 0;
}
