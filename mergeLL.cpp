#include <bits/stdc++.h>
using namespace std;
struct Node{
int data;
Node *next;
};
Node *first = NULL; 
Node *second = NULL;
Node *third = NULL;


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
}  


}
void merge(Node *p, Node *q)
{
    Node *last;
    if(p->data < q->data){
         third = last = p;
         p = p->next;
        third->next = NULL;
     }
     else{
         third = last = q;
         q = q->next;
         third->next = NULL;
     }
         
     while(p!=NULL && q!= NULL)
     {
         if(p->data <q->data)
         {
             last->next = p;
             last =p;                              // connect last to the node whichever is smaller then move last to the end
                                                // make the header node to the next node 
             p=p->next;
             last->next = NULL;

         }
         else{
             last->next = q;
             last = q;
             q=q->next;
             last->next = NULL;
         }

     }
if(p)last->next=p;             // if one LL is greater then atlast insert the elements in the LL which has greater size
if(q)last->next=q;

}
void create1(int b[],int n)
{
     Node *last,*newnode;
second = new Node();
second->data = b[0];
second->next = NULL;
last = second;
for(int i=1; i<n; i++)
{
    newnode = new Node();
    newnode->data = b[i];
    newnode->next=NULL;
    last->next = newnode;
    last = newnode;
}  


}

void display(Node *p)
{
    while(p!=NULL)
    {
        cout << p->data;
        p= p->next;
    }
}


int main(){

int a[] = {1,3,5,7,9,11,13,15};
int b[] = {2,4,6,8,10,12,14,16,17};
create(a,8);
create1(b,9);

merge(first,second);

display(third);

}