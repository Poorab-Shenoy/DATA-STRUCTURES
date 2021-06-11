#include <bits/stdc++.h>
using namespace std;

int main(){

    int a[10] ={6,3,8,10,16,7,5,2,9,14};
    int hash[15]; 
    for(int i=0; i<15; i++)
    {
        hash[i] =0;

    }
    for(int i=0; i<10; i++)
    {
        if(hash[10-a[i]] !=0)
        {
            cout<< "the elements are  " << a[i] <<" " << 10-a[i] << endl; 
        }
        hash[a[i]]++;
    }
}