#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next;
};
Node *front =  NULL;
 Node *rear = NULL;
void  enqueue1(int x)
{
Node *t;
t = new Node();
if(t== NULL)
{
    cout <<  " queue is full";
}
else{
    t->data = x;
    t->next = NULL;
    if(front == NULL)
    {
        rear = front = t;
    }
    else
    {
        rear->next = t;
        rear = t;

        
    }
}
}
int dequeue1()
{
  int x=-1;
  Node *p;
  if(front == NULL)
  {
      cout << "queue is empty";

  }
  else{
  x= front->data;
  p = front;
  front =  front->next;
  delete p;
  }
  return x;


}


void Display()
{
struct Node *p=front;
while(p)
{
printf("%d ",p->data);
p=p->next;
}
printf("\n");
}

int main()
{

enqueue1(9);           
enqueue1(8);              
cout << dequeue1();
Display();
}