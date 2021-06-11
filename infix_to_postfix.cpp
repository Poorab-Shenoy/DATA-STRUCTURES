#include<bits/stdc++.h>
using namespace std;
int prececedence(char  x)
{
    if(x=='+' || x== '-')
        return 1;
    else if(x=='/' || x=='*')
        return 2;
    else
        return 0;
}
int isOperand(char x)
{
    if(x=='+' || x=='-' || x== '/' ||x=='*')
    {
        return 0;
    }
    return 1;

}
 string  infixToPostFix(string a)
 {
     stack<char> s;
     string postfix="";
     int i =0;
  
     while(i<7)
     {
         cout << "i: "<<i<<" ";
        if(isOperand(a[i]))
        {
            s.push(a[i]);
            i++;
        } else if(s.empty()) {
            s.push(a[i]);
            i++;
        } else if(prececedence(a[i]) > prececedence(s.top()))          // for 'a' pre is 0 so 1>0
        {
            s.push(a[i]);
            i++;
        }
        else{
            postfix = postfix + s.top();
            s.pop();
            i++;
        }
     }
     while(!s.empty())
     {
         postfix = postfix + s.top();
         s.pop();
     }
    return postfix;     
 }
int main()
{
    string  a = "a+b*c/d";
    cout <<  infixToPostFix(a);
    return 1;
}