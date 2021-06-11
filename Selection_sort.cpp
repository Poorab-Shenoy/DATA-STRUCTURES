// selection sort is the only sort algorithm that takes minimum swap to sort an array min swap = o(n)
//time complexith  is o(n^2)

#include <bits/stdc++.h>
using namespace std;

int  *Selection_sort(int a[],int n)
{
    int i;
    int k;
    int j;  

    for(int i=0; i<n-1; i++)
    {
        for(] j =k= i; j<n; j++)         //after the j for loop we will get the j index pointing on the smallest element
         {
         if(a[j]<a[k])
         {
             k = j;
         }
        }
        swap(a[i],a[k]);     //then we swap the first element with the smallest element
    }
    return a;
}

int main()
{
int a[] = {6,4,1,3,0,2};
int n = sizeof(a)/sizeof(a[0]);
Selection_sort(a,n);
for(int i=0; i<n; i++)
{
    cout << a[i];
}
}