#include <bits/stdc++.h>
using namespace std;
int funA(int n, int r){
if(r==0 || n==r)
{
    return n;
}
return funA(n-1,r-1) +funA(n-1,r);
}

int main(){
  cout <<  funA(5,3);
}