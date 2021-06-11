#include<bits/stdc++.h>
using namespace std;

bool ismatchingPair(char c1, char c2)
{
    if(c1=='{' && c2=='}')
     return true;
     else
    if(c1=='[' && c2==']')
    return true;
    else
    if(c1=='('&& c2 ==')')
    return true;
    else
    return false;
}

int balanced(char ex[], stack <char>s)
{
 for(int i =0; ex[i]!= '\0'; i++)
   {
   if(ex[i]=='{' || ex[i] == '[' || ex[i] == '(')
    {
        s.push(ex[i]);
    }
    
    if(ex[i]=='}' || ex[i] == ']' || ex[i] == ')')
    if(s.empty())
    {
       return 0;        
    }
    else 
    if(ismatchingPair(s.top(),ex[i]))
    {
         s.pop();

      }else
      {
             if(!ismatchingPair(s.top(),ex[i]))
    {
             return 0;
      }
      }

  
   }
   if(s.empty())
   {
       return 1;
   }
   else 
   return 0;
}

int main()
{
   stack<char> s;
   
   char ex[100]="{[a+b]*[c-d]}";

    if(balanced(ex,s))
    {
          cout << "balanced";
    }   
    else 
    cout << "not balanced";
}