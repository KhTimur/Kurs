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

