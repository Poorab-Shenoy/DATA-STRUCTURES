#include <bits/stdc++.h>
using namespace std;

struct Node{
int data;
Node *left;
Node* next;
};
Node *first = NULL;

void create(int a[], int n)
{
    Node *newnode;
    Node *last=NULL;
  first = new Node();
   first->data = a[0];
   first->next= first->left = first;
   last = first;
   for(int i =1; i<n; i++)
   {
       newnode = new Node();
       newnode->data = a[i];
       newnode->next= last->next;
       newnode->left = last;
       last->next = newnode;
       last = newnode;
         
   }
   

}
void display(Node *p)
{
    do{
        cout << p->data<< "";
        p=p->next;
    }while(p!=first);
}
int main()
{
    int a[] = {1,2,3,4,5,6,7,8,9};

    create(a,9);
    display(first);
}