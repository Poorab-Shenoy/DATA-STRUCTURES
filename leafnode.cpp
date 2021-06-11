#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *right;
    Node *left;
}*root = NULL;

Node *create()
{ int x;
   Node *newnode=NULL; 
   Node *p=NULL;

   root = new Node();
   cout << "enter the data of root";
   cin >> x;
   root->data = x;
   root->left = root->right =NULL;
   queue<Node *> q;
   q.push(root);
   while(!q.empty())
   {
       p = q.front();
       q.pop();
       cout << "enter the left element of " << p->data;
       cin >> x;
       if(x!=-1)
       {
         newnode = new Node();
         newnode->data = x;
         newnode->right = newnode->left = NULL;
         p->left     = newnode;
         q.push(newnode);
       }
      cout << "enter the right element of " << p->data;
      cin>> x;
      if(x!=-1)
      {
          newnode  = new Node();
          newnode->data =x;
          newnode->right = newnode->left = NULL;
          p->right = newnode;
          q.push(newnode);
      }

   }
   return root;

   
}
int sum =0;
void  postorder1(Node *h)
{   
    if(h!=NULL)
    {
    postorder1(h->left);
    postorder1(h->right);
        if(h->left==NULL && h->right == NULL)                           // this condition is used to get the leaff nodes
        {
            cout << h->data;
        
            
        }
  
    }
}
int count(Node* root)
{
if(root == NULL)                            // ROOT == NULL case is given so that if oone of the root nodes left is not present but right is present
                                            //then the left side will call f(null) then it will return 0
                                                                     // counts the no of leaf nodes
return 0;
if(root->left == NULL &&  root->right == NULL)                     //     5
return 1;                                                          //    /           in this case f(1 ) will call f(NULL) return 0
else                                                               //   1                                  and here f(right ie 4) returns 1 since left and right both are null         
 return count(root->left) + count(root->right);                     //   \
 }                                                                  //    4
int main()                                          
{

    create();
    postorder1(root);
    cout <<   count(root);     
}