#include <bits/stdc++.h>
using namespace std;

int main(){
    int j=0;
    int a[100] = {3,6,8,8,10,12,15,15,15,20};
for(int i=0; i<9; i++)
{
    if(a[i] == a[i+1])
    {
        j=i+1;
        while(a[j] ==a[i])   j++; 
            cout << "the dup element is " << a[i] <<"\t and the number of times its repeating is " << j-i <<endl;
            i=j-1;
    }
}


}