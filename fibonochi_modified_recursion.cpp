#include <bits/stdc++.h>
using namespace std;
 
int f[100];
 int funA(int n){
     if(n <=1)
     {
         f[n] = n;
         return n;
     }
     if(f[n-2]==-1)
     {
         f[n-2] = funA(n-2);
          
     }
     if(f[n-1]==-1)
     {
         f[n-1] = funA(n-1);
          
     }
     return f[n-2]+f[n-1];
 }

 int main(){
     for(int i =0; i<100; i++)
     {
         f[i] = -1;
     }
cout << funA(5);
 }