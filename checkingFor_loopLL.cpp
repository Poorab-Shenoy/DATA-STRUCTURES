#include <bits/stdc++.h>
using namespace std;

struct Node{
int data;
Node *next;
};
Node *first=NULL;

void create(int a[],int no_ele)
{
     Node *last,*newnode;
first = new Node();
first->data = a[0];
first->next = NULL;
last = first;
for(int i=1; i<no_ele; i++)
{
    newnode = new Node();
    newnode->data = a[i];
    newnode->next=NULL; 
    last->next = newnode;
    last = newnode;
    last->next = first;                              // this statement is intentionally added so that LL can form a loop 
}  
}

bool check_loop(Node *f){
Node*p,*q;
p=q=f;
do
{
    p=p->next;
    q=q->next;
    q=q!=NULL?q->next:q;
 
} while(p!=NULL && q!=NULL && p!=q);
if(p==q)
return true;
else
return false;


}





int main(){
int a[] = {1,2,3,4,5,6,7,8,9};
create(a,8);
cout << check_loop(first);                                   // it should return 1 since LL is looped
} 