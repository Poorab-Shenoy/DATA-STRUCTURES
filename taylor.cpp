#include <bits/stdc++.h>
using namespace std;

double funA(int x, int n)
{
    static double s=1;
if(n==0)
{
    return s;

}
s = 1+x/n*s;
return funA(x,n-1);

}

int main(){

    cout << funA(1,10);
}