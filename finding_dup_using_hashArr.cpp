#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[10] = {3,6,8,8,10,12,15,15,15,20};
    int hash[21];     //size of has is max(element in a[10])+1
    for(int i =0; i<21; i++)
    {
        hash[i]=0;

    }
    for(int i =1; i<10; i++)
    {                                                                                   ///since it uses an array hash the time complexity is o(n)
        hash[a[i]]++;

    }
     for(int i =1; i<21; i++)
    {
          if(hash[i]>1)
          {
              cout << "the number of time element repeats is  " << hash[i] <<"  and the element is " << i << endl;
          }
    }
    
}