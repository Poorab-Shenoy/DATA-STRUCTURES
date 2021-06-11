// a binary heap should be a complete tree that is when the nodes data is insertedin an array it should not have blank spaces
// in a heap we can delete only the highest priority element that is the root node
#include <bits/stdc++.h>
using namespace std;

void insert1(int a[], int n)
{
    int temp, i=n;
    temp = a[n];
    while(i>1 && temp>a[i/2])
    {
        swap(a[i],a[i/2]);
        // a[i] = a[i/2];
        i = i/2;
    }
    // a[i]= temp;

   
}
int delete1(int a[],int n){                       //n is the no of elements in this case it is 7
    int val,x;
    val =   a[1];
    x =  a[n];
    a[1] = a[n];
    a[n]=val;
     int i = 1;
    int j = i*2;    
    while(j<n-1)
    {
        if(a[j+1]>a[j])
        j = j+1;
       
        if(a[i]<a[j])
        {
            swap(a[i],a[j]);
            i  = j;
            j = 2*j;
        }
        else 
        break;
    }
      return val;

}

int main()
{

    int a[] ={0,10,20,30,25,5,40,35};            // we are starting from index 2 ie 20 0 and 10 are all there the elements 
                                                 // after 10 are not there   //40 25 35 10 5 20 30
    int i;
    for(int i=2; i<= 7; i++)                   // the heap is 40 lchild is 25 rchild is 35 lchild of 25 is 10 rchilld of 25 is 5
                                                // lchild and rchild of 35 is 20 and 30
    {
        insert1(a,i);
    }
    // cout << "the deleted element is " << delete1(a,7)<< endl; // in heap if we delete a element then the highest priority element will be deleted
                                                                // ie 40 will be deleted and it will be returned at the end of the array
    for(int i=1; i<=7; i++)                                         
    {
        cout << a[i]; 
    }
}