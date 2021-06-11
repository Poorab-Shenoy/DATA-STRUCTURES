#include <bits/stdc++.h>
using namespace std;


int fun1(int x){
if(x>0){
    static int z =0;
    z++;
    return fun1(x-1)+z;         ////z will be added only when returning and not on calling
                                 /// last value of z will be 5

}
return 0;
}

int main(){
    
    int r;
    r = fun1(5);
    cout << r;
}