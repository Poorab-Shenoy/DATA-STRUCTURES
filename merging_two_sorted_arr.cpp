#include <bits/stdc++.h>
using namespace std;

int main(){

    int a[5]={3,8,16,20,25};
    int b[5] = {4,10,12,22,23};
    int c[10];
    int i=0;;
    int j=0;
    int k =0;
    while(i<5 && j<5)
    {  
         if(a[i]<b[j])
        {                                                                      // two sorted array is being merged here there are 3 pointer i,j,k 
                                                 /// comparing a[i] and b[j] then whichever is lesser is inserted into the array then the pointer of the inserted element is 
                                              //// moved to the next. and pointer of k is always incremented since every time we are inserting 
            c[k++] = a[i++];

        }
        else{
            c[k++] = b[j++];

        }
    }
    while(i<5)                                                           //// the two while loops are here used to copy the remaining element to the c array if there are any.
    {
        c[k++] = a[i];
        i++;
    }
    while(j<5){
        c[k++] = b[j];
        j++;
    }

    for(int z=0; z<10; z++)
    {
        cout << c[z] << "\t";
    }
}