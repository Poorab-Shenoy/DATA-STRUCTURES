#include <bits/stdc++.h>
using namespace std;

int funA(int x){
if(x==1)
{
    return 1;
}
return funA(x-1)*x;
}


int main(){
    cout << funA(5);
}