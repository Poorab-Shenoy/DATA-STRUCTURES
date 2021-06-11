#include <bits/stdc++.h>
using namespace std;

int funA(int x, int y){
    if(y==0){
        return 1;
    }
    if(y%2 == 0)
    {
        return funA(x*x,y/2);

    }
    else{
        return x*funA(x*x, (y-1)/2);
    }

}

int main(){
  cout <<  funA(2,9);
}