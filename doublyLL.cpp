#include <bits/stdc++.h>
using namespace std;
struct Node{
Node *left;
Node *next;
int data;
};
Node *first= NULL;

void create(int a[],int n)
{
Node *last=NULL;
first = new Node();
first->data = a[0];
first->left=first->next=NULL;
last = first;
for(int i=1; i<n; i++)
{
   Node * newnode = new Node();
   newnode->data= a[i];
   newnode->next = last->next;
   newnode->left= last;
   last->next = newnode;
   last = newnode;                                                                                                                                                                  
    
}

}
void insert(Node *ins,int index, int x ){
    Node *newnode;
    if(index==0)
    {
        newnode = new Node();
        newnode->data = x;
        newnode->left = NULL;
        newnode->next= first;
        first->left = newnode;
        first = newnode;

    }
    else{

        for(int i=0; i<index-1; i++)
          ins=ins->next;
        newnode= new Node();
        newnode->data = x;
        newnode->left= ins;
        newnode->next=ins->next;
        ins->next = newnode;
        ins= newnode;
    }
}

 void display(Node *p){
     while(p!=NULL)
     {
         cout << p->data;
         p= p->next;
     }
 }



int main(){
int a[]= {1,2,3,4,5,6,7,8,9};
create(a,9);
insert(first,3,88);
display(first);

}