#include <bits/stdc++.h>
using namespace std;
                                                           ///this is only applicable if there are single missing element o(n)

int main()
{
    int a[100] = {6,7,8,9,11,12};
    int diff;
    int low= a[0];
    int high = a[5];
    diff = low -0;
    for(int i=0; i<5; i++)
    {
        if(a[i]-i != diff)
        {
            cout << "the missing element is " << i+diff;
        }

    }
}