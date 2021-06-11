#include<bits/stdc++.h>
using namespace std;

struct queue1{
  int front;
  int rear;
  int *Q;
  int size;
  
};

void create(queue1 *q1, int size)
{ 

    q1->size = size;
    q1->front = q1->rear = 0;

    q1->Q= new int[size-1];

}
void enqueue1(queue1 *q1,int x)
{
    if((q1->rear+1)%q1->size == q1->front)
    {
        cout << "the queue is full";
    }
    else{

        q1->rear= q1->rear+1%q1->size;
        q1->Q[q1->rear] = x;
    }
}
void Display( queue1 q1)
{
int i=q1.front+1;
do
{
printf("%d ",q1.Q[i]);
i=(i+1)%q1.size;
}while(i!=(q1.rear+1)%q1.size);
printf("\n");
}
int main()
{
 struct queue1 q1;
 create(&q1,5);
 enqueue1(&q1,6);
 Display(q1);

}