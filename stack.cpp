#include<bits/stdc++.h>
using namespace std;


  int top=-1;
    int size;

void push_back(int x, int s[]){
    if(top== size-1)
    {
        cout << "the stack is full so no elements can be inserted";

    }
    else{
        top++;
        s[top]=x;
    }

}

void display(int s[])
{
    for(int i=top; top>=0; top--)
    {
        cout << s[top];
    }
}

int main(){

  
    int s[size];

    cout << "enter the size of the stack";
    cin >> size;

     s[size-1];
    push_back(1,s);
    display(s);
}