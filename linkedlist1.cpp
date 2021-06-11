#include <bits/stdc++.h>
using namespace std;
struct Node{
int data;
Node* next;

};
Node*first = NULL;

Node* insert(Node *p, int pos, int x)
{
    Node *t=NULL;
  if(pos == 0)
  {
      t= new Node();
      t->data = x;
      t->next = first;
      first = t;
      return first;
  }
  else
  {
        
           t= new Node();
          t->data = x;
          t->next =first;
          for(int i=0; i<pos-1 &&p!=NULL; i++)
          {
              p= p->next;

          }
          t->next = p->next;
          p->next =t;
      }
          return first;


  
return NULL;
}


void display(Node *p)
{
    while(p!=NULL)
    {
        cout << p->data << "";
        p = p->next;
    }
} 



int main()
{
int pos;
int x;

insert(first,0,8);
insert(first,0,9);
insert(first,1,15);


display(first);
}