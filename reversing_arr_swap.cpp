#include <bits/stdc++.h>
using namespace std;


int main(){                                                        //O(n) without extra space done using swapping till i and j are equal

    int a[100] = {1,2,3,4,5};
    int i,j;
    int temp;
  for(int i=4,j=0; i>=j; i--,j++)
  {
      temp = a[j];
      a[j]=a[i];
      a[i] = temp;
  }
      for(int z=0; z<5; z++)
       {    
           cout << a[z];
          // cout <<b[z];
       } 
}