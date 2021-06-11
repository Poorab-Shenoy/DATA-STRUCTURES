#include <bits/stdc++.h>
using namespace std;

int main(){

    stack<int> s1;
    stack<int> s2;
    int a[] = {1,2,3,4,5,6,7,8};
    for(int i=0; i<8; i++)
    {
        s1.push(a[i]);
        s2.push(s1.top());
        s1.pop();
        cout << s2.top() << "";
        s2.pop();
    }
}