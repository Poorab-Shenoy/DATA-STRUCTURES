// for sorted array in the increasing or decreasing order quicksort time complexity is the worst for other array its time complexity is o(nlogn)
// if partitioning is done in the middle then its o(nlogn) if partiontioning is done at the end then it is o(n^2)(means any one side)
//quicsort is also called selection exchange or partition exchange sort     
#include <bits/stdc++.h>
using namespace std;

int Partition1(int a[],int l, int h)
{
    int pivot1 = a[l];
    int i =l;
    int j = h;
    while(i<j){
        while(a[i]<=pivot1){i++; }
           while(a[j]>pivot1){--j;}
           if(i<j)
           {           swap(a[i],a[j]);     }
          
    }
    swap(a[l],a[j]);             //swaping the pivot element
    return j;
}


void Quicksort1(int a[],int l,int h)
{

    int j;
  if(l<h)
  {

  
   j =   Partition1(a,l,h);            // pivot element will be at the correct index for eg consider that the pivot element is 
                                      /// is on middle position which is correct then from middle partition left and right 
     Quicksort1(a,l,j);
     Quicksort1(a,j+1,h);
  }
}


int main(){
int a[]={11,13,7,12,16,9,24,5,10,3};
int n;
n = sizeof(a)/sizeof(a[0]);

Quicksort1(a,0,n-1);
for(int i =0; i<n; i++)
{
    cout << a[i];
}


}