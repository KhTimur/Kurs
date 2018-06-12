#include <iostream>
#include <iterator>
using namespace std;


void inser(int * begi, int *en)
{
    for(int *ptr  = begi; ptr != en; ptr++)
        for(int *j=ptr; j != begi && *(j-1)>*j;j--)
	    {
	      swap(*(j-1),*j);
            }
}




