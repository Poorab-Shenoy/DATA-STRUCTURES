#include <bits/stdc++.h>
using namespace std;


void funA(int n, int x, int y, int z)
{
    if(n>0){
funA(n-1,x,z,y);
cout << "from " << x << "to " << z;
funA(n-1,y,x,z);
    }
}

 

int main(){
    funA(3,1,2,3);
}