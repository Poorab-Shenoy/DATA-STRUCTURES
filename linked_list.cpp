#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next;
    
};
Node *first=NULL;

Node* insert(int pos, int x)
{
     if(pos==0)                                         // inserting at position zero that is before the first node
     {
         Node *newnode = new Node();
         newnode->data =x;
         newnode->next = first;
         first = newnode;
         return first;

     }
     else
     if(pos >0)
     {
         Node *p=NULL;                                  // this is applicable for inserting at middle and at the end
         p = first;
        
         for(int i=0; i<pos-1 && p!=NULL; i++)
         {
             p=p->next;

         }
         if(p){
             Node *t = new Node();
             t->data = x;
             t->next =  p->next;
             p->next = t;
             return first;
         }

     }
     return NULL;
}
Node *insert_last(int x)
{   Node *last;
    Node *t= new Node();
    t->data =x;
    t->next = NULL;
    if(first ==NULL){
        first = last = t;
         return first;
    }
    else
    {
        last->next = t;
        last =t;
        return first;
    }
  return NULL;
  }
                                                                  
Node *search(Node *p,int key)
{                                                                     //to improve search  we are taking the value of key and 
                                                                      // putting it in first position
    Node* q=NULL;
    while(p!=NULL)
    {
     if(p->data==key){
     q->next = p->next;
     p->next = first;
     first=p;
     return p;
     }

        q=p;
        p=p->next;
       
       

    }
    return NULL;
}
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

void maximum(Node *p)
{
    int max= INT_MIN;
    while(p!=NULL)
    {
        if(p->data>max)
        {
            max=p->data;
        }
        p = p->next;
    }
    cout << max << endl;
}
void recursive_display(Node *p){
if(p != NULL)
{
    cout << p->data << "";
     recursive_display(p->next);
}
}

void display(Node *p)
{
    int count=0;
    while(p!=NULL)
    {
        count++;
        cout << p->data;
        p=p->next;
    }
    cout << "\nthe no of nodes "<< count << endl;  

}

int main()
{
    int a[] ={1,2,3,4,5,6,7,8};
  //  create(a,8);
 //   maximum(first);
   
 //search(first,6);
  // insert(2,9);     
   insert_last(10);               
   insert_last(20);
      display(first); 

    //recursive_display(first);
}