#include <iostream>
#include <algorithm>
using namespace std;

void inplmerg (int* begi, int* middle, int* en)
{
   int const siz = std::distance(begi, en);
   int num[siz];
   int k=0;
   int j=0;
   int i=0;
   while( ((begi+i)<middle) && ((middle+k)<en)  )
       if(*(begi+i) < *(middle+k))
          {
            num[j]=*(begi+i);
            i++;
            j++;
          }
       else
          {
            num[j]=*(middle+k);
            k++;
            j++;
          }
   while ((begi+i)<middle)
        {
            num[j]=*(begi+i);
            i++;
            j++;
        }
   while ((middle+k)<en)
        {
            num[j]=*(middle+k);
            k++;
            j++;
        }
   for (int i = 0; i<siz; i++)
      {
        *(begi+i)=num[i];
      }
}


void merge_sort(int * begi, int *en)
{
    int const siz = std::distance(begi, en);
    if (siz <= 1) return;
    int * const middle = begi+( siz / 2);
    merge_sort(begi, middle);
    merge_sort(middle, en);
    inplmerg(begi, middle, en);
}

