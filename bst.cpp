#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *left;
    Node *right;

}*root = NULL;

void insert1(int key)
{
    Node *t = root;
    Node *r=NULL;
    Node *newnode;
    if(root==NULL)
    { 
        newnode = new Node();                          //first if root = null create newnode and make it as root
                                                      
        newnode->data = key;
        newnode->left = newnode->right = NULL;
        root = newnode;   // thee root node must point on the newnode since it is first node  
          return;

    }
    while(t!=NULL)
    {                 
        r=t;                                          //here r acts as a follower of t when t points to null r will be one node before t
        if(key<t->data)
        {
           t= t->left;
        }
           else
           if(key>t->data)
           {
               t= t->right;
           }
           else 
           return;
    }
        newnode = new Node();
        newnode->data = key;
        newnode->left = newnode->right = NULL;
        if(key<r->data)
         r->left = newnode;
        else 
       r->right = newnode;
    

}


 Node * Search(int key)
{
 Node *t=root;
while(t!=NULL)
{
if(key==t->data)
return t;
else if(key<t->data)
t=t->left;
else
t=t->right;
}
return NULL;
}
void Inorder(struct Node *p)
{                                       // 10 50 90 where 50 is r00t
if(p!=NULL)
{
Inorder(p->left);
printf("%d ",p->data);
Inorder(p->right);
}
}
Node *Rinsert1(Node *p, int key)
{
    Node *newnode=NULL;
    if(p==NULL)
    {
        newnode = new Node();
        newnode->data  = key;
        newnode->left = newnode->right = NULL;
        return newnode;
    }
    if(key < p->data)
    p->left = Rinsert1(p->left,key);
    else
    if(key>p->data)
    p->right = Rinsert1(p->right,key);
    return p;
}
int main()
{
    Node *temp=NULL;
root = Rinsert1(root,50);
Rinsert1(root,10);
Rinsert1(root,60);
//  insert1(50);
// insert1(90);
// insert1(10);
Inorder(root);
cout << endl;
// temp = Search(90);
// if(temp!=NULL)
// {
//     cout << "element is found" << temp->data;
// }
}