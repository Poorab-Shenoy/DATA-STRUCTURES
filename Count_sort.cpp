// count sort uses extra space it uses an extra array we first inititalize it to zero then then checks the element from the first 
// array if th element is there then the index of the hash array is incremented by 1 
#include <bits/stdc++.h>
using namespace std;
int max2(int a[],int n)
{
    int m = INT_MIN;
    for(int i =0; i<n; i++)
    {
        if(a[i]>m)
        {
            m= a[i];
        }
    }
    return m;
}

void Count_sort(int a[], int n)
{
     int max1;
     int k,j;
     max1 = max2(a,n);
     int b[max1+1];              // sincee it starts from 0 we want the index till the element
     for(int i =0; i<max1+1; i++){
         b[i] =0;

     }
     for(int i=0; i<n; i++)
     {
         b[a[i]]++;
     }
     k=0;
     j=0;
     while(j<max1+1)
     {
         if(b[j]>0)
         {
             a[k++]=j;
             b[j]--;
         }
         else
         j++;
     }
}
int main(){
  int a[] = {5,4,3,3,2,1,2};
  int n = sizeof(a)/sizeof(a[0]);
  Count_sort(a,n);
  for(int i =0; i<n; i++)
  {
      cout << a[i];
  }
  

}