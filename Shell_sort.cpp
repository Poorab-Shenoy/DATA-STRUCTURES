#include<bits/stdc++.h>
using namespace std;


void Shell_sort(int a[], int n)
{
    int temp,gap,i,j;
    for(gap = n/2; gap>=1; gap/=2)
    {
        for(i = gap; i<n; i++)
        {
            temp = a[i];
            j = i-gap;
            while(j>=0 && a[j]>temp)
            {
            
                    // a[j+gap] = a[j];
                    // j  = j-gap;
            }
                swap(a[j],a[j+gap]);
            // a[j+gap]=temp;
        }
    }
}

int main()
{
    int a[] = {4,2,1,3,6,5};
    int n = sizeof(a)/sizeof(a[0]);

    Shell_sort(a, n);
    for(int i =0; i<n; i++)
    {
        cout << a[i];
    }
}