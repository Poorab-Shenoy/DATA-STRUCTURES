#include <bits/stdc++.h>
using namespace std;

class Diagonal{
private:
 int n;
 int *A;
public:
  Diagonal(){
        n=2;  
        A =new int[2];
    
  }
  Diagonal(int n)
  {
      this->n=n;
      A = new int[n];

  }
 void set(int i,int j, int x);
 int get(int i, int j);
 void display();
};
void Diagonal::set(int i, int j, int x)
{
    if(i==j)
    {
        A[i-1] = x;

    }
    
}
int Diagonal::get(int i, int j)
{
    if(i==j)return A[i-1];
    else return 0;

}
void Diagonal::display(){
    for(int i=0; i<n; i++) 
     {
         for(int j=0; j<n;  j++)
         {
             if(i==j) 
             {
                 cout << A[i-1] << " ";
             }
             else{
                 cout << "0" << " ";
             }
         }
                      cout << endl;

     }
}

int main(){
  
  Diagonal obj(4);                                // if the value is not passed in the object the default constructor would be called
  
                                                       
  obj.set(1,1,1);
    obj.set(2,2,2);
        obj.set(3,3,3);
         obj.set(4,4,4);
         obj.display();
 return 0;
}