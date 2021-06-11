#include <bits/stdc++.h>
using namespace std;
void funB(int x);
void funA(int x){
    if(x>0)
    {                      ///this is indirect recursion since the function
                            // is calling in a circular manner
                            
        cout << x;
        funB(x-1);
    } 
}

void funB(int x){
    if(x>0){
        cout << x;
        funA(x-1);
    }

} 






int main()
{
    funA(20);
}