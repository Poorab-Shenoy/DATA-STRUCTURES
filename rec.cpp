#include <bits/stdc++.h>
using namespace std;
void fun1(int x){
    if(x>0)
    {
        fun1(x-1);
        cout << x;

    }
}



int main(){
    int x = 3;
    fun1(3);
}