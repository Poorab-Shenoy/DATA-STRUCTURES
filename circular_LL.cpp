#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next;
};
Node *head= NULL;


void insert(Node *h,int index, int x)
{
    
    if(index==0)
    {
        Node *newnode = new Node();
        newnode->data = x;
        if(head == NULL)
        {
            head = newnode;
            head->next = head;  

        }        
        else{
            while(h->next != head)
            {
                h=h->next;  
            }
              h->next= newnode;
              newnode->next = head;
              head= newnode;
         }
    }else
{
for(int i=0;i<index-1;i++)h=h->next;
Node* newnode = new Node();
newnode->data=x;
newnode->next=h->next;
h->next=newnode;

}
}

int  Delete(Node *p, int pos)
{ int x;
Node * q;

    if(pos == 1)
    {
        while(p->next !=head)
         p = p->next;
         x = head->data;
        if(head==p)
        {
            delete head;    
            head= NULL;

        }
        else
        {
            p->next =  head->next;
            delete head;
        }
    }
        else{
         for(int i=0;i<pos-2;i++)
         p=p->next;
         q=p->next;
         p->next=q->next;
         x=q->data;
          delete q;
         }

    return x;
    

}

void createCLL(int a[],int n){
        Node *last=NULL;

  head = new Node();
    head->data = a[0];
    head->next = head;
    last=head;
    for(int i=1; i<n; i++)
    {
      Node *newnode = new Node();
      newnode->data = a[i];
      newnode->next=last->next;
      last->next = newnode;
      last = newnode;
    }
    // if(last!=NULL)

}

void display(Node *p)
{

    do
    {
        cout << p->data;
        p=p->next;
    } while (p!=head);
    cout << endl;   
}




int main(){
    int a[] ={1,2,3,4,5,6,7,8};
createCLL(a,8);
//insert(head,0,45);
//display(head);

cout << Delete(head, 1);
}