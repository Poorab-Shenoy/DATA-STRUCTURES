#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[12] = {1,2,4,5};
    int i;
    int x;
    i=3;
    cin >> x;                                 //shifted 5 to 6 /4 to 5 th index/ then inserted the 3 in the 2nd index
    while(a[i]>x)
    {
        a[i+1] = a[i];
        --i;

    }
    a[i+1] = x;
    for(int j=0; j<5; j++)
    {
        cout <<  a[j];
    }  
} 
