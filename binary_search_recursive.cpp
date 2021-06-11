#include <bits/stdc++.h>
using namespace std;

int fun(int low,int high,int key, int arr[]){
       int mid;

    if(low <= high){
    mid = (low+high)/2;
    if(key == arr[mid])
    {
         return mid;
    }
    else if(key<arr[mid])
    {
       return fun(low,mid-1,key,arr);
    }
    else if(key>arr[mid])
    {
       return  fun(mid+1,high,key,arr);
    }
    }
    return -1;

}




int  main(){
    int low,high,ele;
    low =0; 
    high = 4;
    int a[100];
    cout << "enter the elements in the array" << endl;
    
    for(int i=0; i<5; i++)
    {
        cin >> a[i];
    }
     cout << "enter the elemet you want to search" << endl;

    cin >> ele;
     cout << fun(low,high,ele,a);
}