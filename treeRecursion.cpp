#include <bits/stdc++.h>
using namespace std;


int fun(int x){  
if(x>0)
{
    cout << x;
    fun(x-1);
    fun(x-1);
    
}

}


int main(){                    ///this is tree recursion 

fun(3);

}