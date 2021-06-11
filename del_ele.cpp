#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10];
    int x,z;
for(int i=0; i<5; i++)
{
    arr[i]=i;

}

cout << "enter the element you want to shift"<< endl;
cin >> x;


for(int i=0; i<5; i++)
{
    if(arr[i]==x)
    {
        z=i;
        cout << "z: "  << z << endl;
        break;
    }
}

    for(int i=z; i<4; i++)
    {                                                                                                                                                                                                                            
        arr[i] = arr[i+1];
    }

        for(int i =0; i<4; i++)
        {
            cout << arr[i]<< "\t";
        } 
}
