#include <bits/stdc++.h>
using namespace std;


int main(){
int a[100];
int n;
int ele;
int mid;
int low;
int high;
cout << "enter the size of the array";

cin >> n;


for(int i =0; i<n; i++)
{
    cin >> a[i];
}                                                                   //// o(logn)
cout << "enter the elemet that you want to search";
cin >> ele;
low = 0;
high = n-1;
while(low <= high)
{
    mid = (low+high)/2;

if(a[mid]==ele)
{
    cout << "the index of the element you are tryin to search is" <<"\t"<< mid<< endl;
    break;
}
else{
if(ele<a[mid]){
    high = mid-1;
}
}

    if(ele>a[mid])
{

    low = mid+1;

}
}

}