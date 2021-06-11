#include <bits/stdc++.h>
using namespace std;


int main(){


    priority_queue<int> pq;
    pq.push(1);                                 // in pq elements will be arranged in the decreasing order
    pq.push(2);                                  // 321
    pq.push(3);
    cout  << pq.top() << endl;                          ///3
    pq.pop();                              /// deletes3
    cout << pq.top() << endl;                            ///2
}