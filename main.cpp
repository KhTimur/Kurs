#include <iostream>
#include <vector>
using namespace std;

// Сортировка вставками

void vec(vector<int>& a)
{
    for(int i=0;i<a.size();i++)
	    for(int j=i;j>0 && a[j-1]>a[j];j--)
			{
			    int temp;
			    temp=a[j-1];
			    a[j-1]=a[j];
			    a[j]=temp;
            }
}

//Слияние

static void merge(vector<int>& a, size_t left, size_t right, size_t middle)
{
    if (left >= right || middle < left || middle > right) return;
    if (right == left + 1 && a[left] > a[right]) {
        swap(a[left], a[right]);
        return;
    }

    vector<int> tmp(&a[left], &a[right] + 1);

    for (size_t i = left, j = 0, k = middle - left + 1; i <= right; ++i) {
        if (j > middle - left) {
            a[i] = tmp[k++];
        } else if(k > right - left) {
            a[i] = tmp[j++];
        } else {
            a[i] = (tmp[j] < tmp[k]) ? tmp[j++] : tmp[k++];
        }
    }
}


void MergeSort(vector<int>& a, size_t left, size_t right)
{

    if(left >= right) return;
    size_t middle = left + (right - left) / 2;
    MergeSort(a, left, middle);
    MergeSort(a, middle + 1, right);
    merge(a, left, right, middle);
}




 //Пирамидальная

void downHeap(vector<int>& a, long k, long n)
{
    int new_elem;
    long child;
    new_elem = a[k];

    while(k <= n/2)
    {
        child = 2*k;
        if( child < n && a[child] < a[child+1] )
            child++;
        if( new_elem >= a[child] )
            break;
        a[k] = a[child];
        k = child;
    }

    a[k] = new_elem;
}



void heapSort(vector<int>& a, size_t size)
{
    long i;
    int temp;

    for(i = size / 2 - 1; i >= 0; --i)
        downHeap(a, i, size-1);

    for(i=size-1; i > 0; --i)
    {
        temp = a[i];
        a[i] = a[0];
        a[0] = temp;
        downHeap(a, 0, i-1);
    }
}

//Быстрая сортировка


void quickSort(vector<int>& a, long size) {

    long i, j;
    long lb, ub;
    long lbstack[size], ubstack[size];
    long stackpos = 1;
    long ppos;
    int pivot;
    int temp;
    lbstack[1] = 0;
    ubstack[1] = size-1;

    do {
        lb = lbstack[ stackpos ];
        ub = ubstack[ stackpos ];
        stackpos--;

        do {
            ppos = ( lb + ub ) >> 1;
            i = lb; j = ub; pivot = a[ppos];
            do {
                while ( a[i] < pivot ) i++;
                while ( pivot < a[j] ) j--;
                if ( i <= j ) {
                    temp = a[i]; a[i] = a[j]; a[j] = temp;
                    i++; j--;
                }
            } while ( i <= j );

            if ( i < ppos ) {
                if ( i < ub ) {
                    stackpos++;
                    lbstack[ stackpos ] = i;
                    ubstack[ stackpos ] = ub;
                }
            ub = j;
            } else {
                if ( j > lb ) {
                    stackpos++;
                    lbstack[ stackpos ] = lb;
                    ubstack[ stackpos ] = j;
                }
                lb = i;
            }
        } while ( lb < ub );
    } while ( stackpos != 0 );
}

int main()
{
    vector<int> g;
    g.clear();
    g.push_back(6);
    g.push_back(1);
    g.push_back(4);
    g.push_back(3);
    g.push_back(2);
    g.push_back(0);
    g.push_back(7);
    quickSort(g, g.size());
    for(int i=0;i<g.size();i++)
        cout<<g[i];
    return 0;
}
