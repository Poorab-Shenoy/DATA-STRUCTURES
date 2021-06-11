#include <bits/stdc++.h>
using namespace std;

int funA(int  x){
    if(x>100)
    {
        return x-10;
    }
    else{
  return funA(funA(x+11));
    }
}

int main()
{
    cout << funA(96);
}