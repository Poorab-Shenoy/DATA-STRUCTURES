#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[100] = {3,7,4,9,12,6,1,11,2,10};
    int hash[12];      // max ele of a[100] is the size of hash array
    
   for(int i=0; i<12; i++)
   {                                                                                    /// we created a hash array with all values initialised to 0 then checked the first array 
                                                                                        /// and incremented the element in a[100] by 1 in the hash array 
                                                                                        /// the missing element will be in hash array with value 0
       hash[i] = 0;
   }
    for(int i=0; i<10; i++){
        hash[a[i]]++;

    }

        for(int i =1; i<12; i++)
        {
            if(hash[i]==0){
            cout << "missin element is  " << i << endl;

            }
        }
}