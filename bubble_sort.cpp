#include <bits/stdc++.h>
using namespace std;


void bubble_Sort(int a[], int n)
{
    int flag = 0;
    for(int i =0; i<n-1; i++)
    {   
        for(int j=0; j<n-1-i; j++)                      // we want to eliminate that comparison
        {
            if(a[j]>a[j+1])                                  /// bubble sort compares two element 1st one and second one 
                                                       ///second one and third so on so the largest element will be at the end of the array in the first parse
            {                                        // bubble sort is also stable means if there are duplicate it can be used to identify
                flag =1;
                swap(a[j],a[j+1]);
            }
        }
        if(flag = 0)
        {
            cout << "the list is already sorted";
        }
    }
   
}

int main(){


    int a[] = {3,2,4,1,6};
    int n = sizeof(a)/sizeof(a[0]);
    bubble_Sort(a,n);
    for(int i=0; i<n; i++)
    {
        cout << a[i];
    }
}