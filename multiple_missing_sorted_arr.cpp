#include <bits/stdc++.h>
using namespace std;


int main(){
    int a[100] = {6,7,8,9,11,12,15,16,17,18,19};
    int low = a[0];
    int high = 19;
    int diff = low -0;                                                                     /// these are applicable for only sorted array 
                                                                                            //o(n)  since while loop is negligible since it will only print the missing ele
                                                                                            ///here 10 is missing in array i = 4 and diff will be previous diff that is 6
                                                                                            // 4+6=10 now the new diff is 7 since 11-index(4) =7 now compare similarly with next ele
    for(int i=0; i<11; i++)                                             
    {
        if(a[i]-i !=   diff)

        { 
            while(a[i]-i > diff )
            {   cout << "i\t" << i;                                                         /// the difference will be kept on incrementing <9 
                                                                                              /// first the diff is 6 then 7 then 8 then when the diff will be equal to 9(a[i]-i) it will stop the while loop
                cout << "\n" << diff << endl;
                cout << "the missing element is " << i+diff << endl;
                diff++;
            }

        }
    }
}