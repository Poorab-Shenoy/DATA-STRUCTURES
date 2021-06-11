#include <bits/stdc++.h>
using namespace std;

int main(){
vector<int> v = {2,40,30,25,15};

int a[] ={2,40,30,25,15};
make_heap(a,a+5);     // if vector inside the make_heap bracket put v.begin() and v.end() to make it as a heap
for(int i =0; i<5; i++)
{
    cout << a[i];
}

}