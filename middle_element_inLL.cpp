#include <bits/stdc++.h>
using namespace std;

struct Node{
int data;
Node *next;
};
Node *first =  NULL;
void create(int a[],int  n)
{
    Node *newnode= NULL;
    Node *last = NULL;
  first = new Node();
  first->data = a[0];
  first->next = NULL;
  
  last = first;
  for(int i=1; i<n; i++)
  {
   newnode = new Node();
   newnode->data = a[i];
   last->next = newnode;
   last = newnode;
  }
}
void middle_ele()
{
    Node *p,*q;
    p=q=first;
    while(q!=NULL)
    {
        q=q->next;
        if(q->next!=NULL)
        {
            q=q->next;
             p=p->next;

           
        }
        if(q->next == NULL)
        {
            break;
        }

        

    }
    cout << p->data;
}

int main()
{
    int a[] = {1,2,3,4,5,6,7,8,9};

    create(a,9);
    middle_ele();
}