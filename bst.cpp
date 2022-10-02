#include<bits/stdc++.h>
using namespace std;

class Node{
public:
int data;
Node *left,*right;
Node(int d)
{
    data=d;
    left=right=NULL;
}
};


Node* insertnode(Node* head,int data)
{
    if(head ==NULL)
    return new Node(data);
    if(data<=head->data)
    head->left=insertnode(head->left,data);
    if(data>head->data)
    head->right=insertnode(head->right,data);

    return head;
}

void inorder(Node* root)
{
    if(root==NULL)
    return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

}

int main()
{
   int a[]={5,4,7,35,75};
   Node * root=NULL;
   int s=sizeof(a)/sizeof(a[0]);
   for(int i=0;i<s;i++)
   {
    root=insertnode(root,a[i]);
   }
   inorder(root);
    return 0;
}
