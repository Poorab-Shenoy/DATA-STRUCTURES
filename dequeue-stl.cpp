#include <bits/stdc++.h>
using namespace std;

int main(){
    deque<int> d;
    d.push_front(3);                        //3
    d.push_front(1);                        //13
    d.push_back(4);                         //134
    cout << d.front()<< endl;               //1
    cout << d.back()<< endl;                 //4
    cout << d.at(1)<< endl;               //3
    d.pop_front();                          
    cout << d.front();                  //  34
    d.pop_back();
    cout << d.back();                  //3

}