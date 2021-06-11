#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next;
    
};

Node *first = NULL;
Node *first1= NULL;


Node *concatenate(Node *p,Node*p1)
{
while(p->next !=NULL)
{
    p= p->next;
}
p->next = p1;

return first;
    
}
int Delete(Node *p, int pos)
{  int d;
Node *q= NULL;
if(pos == 1)
{  
    q= first;
    d = first->data;
    first = first->next;
    delete q;
    return d;

}
else{
    Node *q= NULL;
    for(int i=0; i<pos-1; i++)
    {
        q=p;
        p = p->next;

    }
    q->next = p->next;
    d= p->data;
    delete p;
    return d;
}
return -1;
}
Node *reverse_Using_threePointer(Node*p)
{
    Node *r = NULL;
    Node *q=NULL;
   
    p=first;
    while(p!=NULL){

    r=q;                                                     
    q=p;
    p=p->next;
    q->next = r;     // reversing link of q and not p since p is used for traversing 
    }
    first = q;                                         // since p will be null and q will be at last node we should give the 
                                                      // starting position since the link is reversed we should start from the end 
    
    return first;
}
void  reverseLL_recursion(Node *q,Node *p)
{

if(p!=NULL)
{
    reverseLL_recursion(p,p->next);
    p->next = q;
}

else {
first =q;           // p will become null then q will be last node so return 
}
}

void merge(Node *p, Node *q)
{  Node *third,*last;
    if(p->data<q->data)
    {
        third = last =p;
        p=p->next;
        third->next = NULL;
    }
    else{
        third=last=p;
        q=q->next;
        third->next = NULL;

    }
    while(p!=NULL&& q!=NULL)
    {
        if( p->data < q->data)
        {
            last->next =p;
            last = p;
            p = p->next;
            third->next = NULL;
        }
        else{
               
            last->next =q;
            last = q;
            q = q->next;
            third->next = NULL;
        
        }
    }
    
}

int isSorted(Node *p)
{
Node *q=NULL;
int max= INT_MIN;
while(p!=NULL)
{                                                                  ///if data value of everynode is not greater than the previous 
                                                                //// then return false. if data value is greater in every iteration then the LL is sorted
if(p->data>max)
{
max = p->data;
p = p->next;
}
else if(p->data <max)
{
    return 0;
}
}
return 1;
}

void create(int a[],int b[],int no_ele,int no_ele1)                                  /// created a linked list from an array 
                                                            
{
    no_ele=no_ele1;
     Node *last,*newnode,*last1;
first = new Node();
first->data = a[0];
first->next = NULL;
last = first;
first1 = new Node();
first1->data = b[0];
first1->next = NULL;
last1 = first1;
for(int i=1; i<no_ele; i++)
{
    newnode = new Node();
    newnode->data = a[i];
    newnode->next=NULL;
    last->next = newnode;
    last = newnode;
    newnode = new Node();
    newnode->data = b[i];
    newnode->next=NULL;
    last1->next = newnode;
    last1 = newnode;
}  


}
void display(Node *p)
{                                                              /// displaying is not needed
    int count=0;
    while(p!=NULL)
    {
        count++;
        cout << p->data;
        p=p->next;
    }
}
int main(){
int a[] ={1,2,3,4,5,6,7,8,9};
int b[] = {10,11,12,13,14,15,16,17,18,19};
create(a,b,9,9);

concatenate(first,first1);
merge(first,first1);
//reverse_Using_threePointer(first);
//reverseLL_recursion(NULL,first);
display(first);
 //cout << isSorted(first);
 //cout << Delete(first,5);
}