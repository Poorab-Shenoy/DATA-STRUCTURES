#include <bits/stdc++.h>
using namespace std;
struct Node{
    Node *left;
    Node *right;
    int data;
    int height;
}*root = NULL;
    int NodeHeight(Node *p)
    {
        int hl,hr;
        hl = p!=NULL && p->left ? p->left->height:0;
        hr = p!=NULL && p->right ? p->right->height:0;

        return hl>hr? hl+1:hr+1; 
    }
    int BF(Node *p)
    {
        int hl,hr;
        hl = p!=NULL && p->left?p->left->height:0;
        hr = p!=NULL && p->right? p->right->height:0;
        return hl-hr;

    }
     Node * LLRot(Node *p)
        {
         Node *pl=p->left;
         Node *plr=pl->right;
        pl->right=p;
        p->left=plr;

        p->height=NodeHeight(p);
        pl->height=NodeHeight(pl);
        if(root==p)
        root=pl;
        return pl;
        }

     Node * LRRot( Node *p)
    {
            Node *pl=p->left;
            Node *plr=pl->right;
            pl->right=plr->left;
            p->left=plr->right;
            plr->left=pl;
            plr->right=p;
            pl->height=NodeHeight(pl);
            p->height=NodeHeight(p);
            plr->height=NodeHeight(plr);
            if(root==p)
            root=plr;
            return plr;
    }
Node *Rinsert(Node *p, int key)
{
    Node *newnode = NULL;

     if(p==NULL)
     {
      newnode = new Node();
       newnode->data = key;
       newnode->left = newnode->right = NULL;
       newnode->height = 1;
       return newnode;
     }
     if(key<p->data)
     {
         p->left = Rinsert(p->left,key);

     }
     else
     if(key>p->data)
     {
         p->right = Rinsert(p->right,key);

     }
        p->height = NodeHeight(p);
            if(BF(p)==2 && BF(p->left)==1)
        return LLRot(p);
        else if(BF(p)==2 && BF(p->left)==-1)
        
        return LRRot(p);
        // else if(BF(p)==-2 && BF(p->rchild)==-1)
       
        // return RRRot(p);
        // else if(BF(p)==-2 && BF(p->rchild)==1)
        
        // return RLRot(p);
       return p;
}
void Inorder(Node *p)
{
    if(p==NULL)
    {
        return;
    }
  Inorder(p->left);
  cout << p->data;
  Inorder(p->right);
}
int main()
{
root = Rinsert(root,50);
Rinsert(root,10);
Rinsert(root,60);
Rinsert(root,5);
Inorder(root);
}