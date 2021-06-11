#include <bits/stdc++.h>
using namespace std;


int main(){                                                    // O(n) with extra space
    int arr[100] = {1,2,3,4,5};
    int b[100];
    int i,j;
    
  for(int i=4,j=0; i>=0; i--,j++)
  {
     b[j] = arr[i];
      
  }
      for(int z=0; z<5; z++)
       {    
           cout <<b[z];
       } 
}