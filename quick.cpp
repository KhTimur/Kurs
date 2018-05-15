#include <iostream>
#include <iterator>


using namespace std;



void quick_sort( int * begi, int * en ) {
  if( begi != en ) {
    int * left  = begi;
    int * right = en;
    int * pivot = left++;
    while( left != right ) {
      if(  *left < *pivot  ) {
         ++left;
      } else {
         while( (left != --right) && ( *pivot < *right ) );
         swap( *left, *right );
      }
    }
    --left;
    swap( *begi, *left );
    quick_sort( begi, left );
    quick_sort( right, en );
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
     int nums[] = { 2,9,3,1,5,7,6 };
    int *begi = std::begin(nums);
    int *en = end(nums);

    quick_sort(begi, en);

    print(begi,en);
    return 0;
}
