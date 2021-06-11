#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *left;
    Node *right;

}*root = NULL;

Node* create(){
    int x;
    Node *p;
    
    Node *newnode;
    queue<Node *> q;                            /// this is to store the adress of a node in the queue
    cout << "enter the root value";
    cin >> x;
    root = new Node();
    root->data =x;
    root->left = root->right = NULL;
    q.push(root);
    while(!q.empty())
    {
        p = q.front();
        q.pop();
        cout << "enter the left child of "<< p->data << endl;
        cin >> x;
        if(x!=-1)
        {    
        
        
            newnode = new Node();
            newnode->data = x;
            newnode->right = newnode->left = NULL;
            p->left = newnode;
            q.push(newnode);

        }
        cout << "enter the right child of " << p->data << endl;
        cin >> x;
        
    
        if(x!=-1)
        {
        newnode = new Node();
        newnode->data = x;
        newnode->right = newnode->left = NULL;
        p->right = newnode;
        p = newnode;
        q.push(newnode);   
        
        }
        }
        return root;
}
void inorder(Node *p)
{
    if(p!=NULL)
    {
    inorder(p->left);
    cout << p->data << endl;    
    inorder(p->right);
    }
}

int main()
{
create();
inorder(root);
}