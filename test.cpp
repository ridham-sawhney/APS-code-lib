#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node* next;
};
struct node * head=NULL;

void insertNode(int newdata)
{
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=newdata;
    newnode->next=head;
    head=newnode;

}

void display()
{
    cout<<endl;
    struct node* current=head;
    while(current!=NULL)
    {
        cout<<current->data<<" ";
        current=current->next;
    }
    cout<<endl;

}

void lsreverse()
{

    struct node * current=head;
    struct node * prev=NULL;
    struct node * next=NULL;
    while(current!=NULL)
    {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;

    }
    head=prev;
}
bool floydloop()
{
    struct node *slow=head,*fast=head;

    while(slow!=NULL and fast!=NULL and fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;

        if(slow==fast)
        return 1;
    } 
    return 0;
}
int main()
{

    insertNode(50);
    insertNode(40);
    insertNode(30);
    insertNode(20);
    insertNode(10);
    display();
    //lsreverse();
    head->next->next=head;
     if(!floydloop())
    display();
    else{
        cout<<"There is a loop";
    }

}
