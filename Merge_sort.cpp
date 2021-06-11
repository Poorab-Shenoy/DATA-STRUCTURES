#include <bits/stdc++.h>
using namespace std;

void Merge(int a[], int l, int m, int h)
{
    int i=l,j=m+1,k=l;
        int b[10];
    while(i<=m && j<=h)
    {
        if(a[i]<a[j])
        b[k++]=a[i++];
        else
        b[k++]=a[j++];
    }
        for(;i<=m;i++)
        b[k++]=a[i];
        for(;j<=h;j++)
        b[k++]=a[j];
        for(i=l;i<=h;i++)
        a[i]=b[i];
    }
void mergesort1(int a[], int l, int h)
{
    int mid;
    if(l<h)
    {
        mid =  (l+h)/2;
        mergesort1(a,l,mid);
        mergesort1(a,mid+1,h);
        Merge(a,l,mid,h);
    }
}

int main()
{
    int low =0;
    int high = 10;

int a[] = {11,13,7,12,16,9,24,5,10,3};
mergesort1(a,low,high);
for(int i=0; i<high; i++)
{
    cout << a[i]<< "";
}


}