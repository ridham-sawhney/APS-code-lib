//reverse a stack using recursion function.
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
struct node
{
    int n;
    struct node* link;
};
typedef struct node NODE;
NODE *create();
NODE *push(NODE *top1);
NODE *pop(NODE *top1);
void display(NODE *top1);
NODE *recur(NODE *top1);
int main()
{
    int i;
    NODE *top1=NULL;
    while(1)
    {
        printf("Enter 1:Push 2:reverse 3:Display 4:Exit\n");
        scanf("%d",&i);
        switch(i)
        {
            case 1:top1=push(top1);
            break;
            case 2:top1=recur(top1);
            break;
            case 3:display(top1);
            break;
            case 4:exit(0);
            break;
            default: printf("Invalid choice\n");
        }
    }
    return 0;
}
NODE *create()
{
    NODE *temp;
    temp=(NODE*)malloc(sizeof(NODE));
    printf("Enter a element\n");
    scanf("%d",&temp->n);
    temp->link=NULL;
    return temp;
}
NODE *push(NODE *top1)
{
    NODE *temp;
    temp=create();
    temp->link=top1;
    top1=temp;
    printf("%d has been pushed into stack\n",top1->n);
    return top1;
}
NODE *pop(NODE *top1)
{
    NODE *temp;
    if(top1==NULL)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("%d will be popped out\n",top1->n);
        temp=top1;
        top1=top1->link;
        temp->link=NULL;
        free(temp);
    }
    return top1;
}
void display(NODE *top1)
{
    NODE *cur;
    if(top1==NULL)
    {
        printf("Stack is empty\n");
    }
    else
    {
        cur=top1;
        printf("Stack elements\n");
        while(cur!=NULL)
        {
            printf("%d\n",cur->n);
            cur=cur->link;
        }
    }
}
NODE *recur(NODE *top1)
{
    NODE *cur,*p;
    if(top1->link==NULL)
    {
        return top1;
    }
    else
    {
        cur=recur(top1->link);
        top1->link->link=top1;
        top1->link=NULL;
        return cur;
    }
}
