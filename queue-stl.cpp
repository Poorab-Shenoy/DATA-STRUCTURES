#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;     
    q.emplace(1);                               // 1
    q.emplace(2);                                   // 1 2
    cout << q.front()<< endl;                   // 1 is displayed
    q.push(3);                                 // 123
                                          
    q.push(4);                                    //1234    
    cout << q.back()<< endl;                      // 4
    q.pop();                                     // the front element is popped out of the queue 234 is remaining
    cout << q.front() << endl;                    // the front element is shown here that is 2
}