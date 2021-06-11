#include <bits/stdc++.h>
using namespace std;

int funA(int x)
{
    if(x==0){
        return 0;

    
    }                          ///o(n),space =(o(n))
    return funA(x-1)+x;
}

int main(){
    cout << funA(5);
}