#include<stdio.h>
#include<stdlib.h>
struct node
{
    int n;
    struct node *link;
};
typedef struct node NODE;
NODE *rear=NULL,*front=NULL;
NODE *create()
{
    NODE *temp;
    temp=(NODE*)malloc(sizeof(NODE));
    temp->link=NULL;
    printf("Enter data\n");
    scanf("%d",&temp->n);
    return temp;
}
void insert()
{
    NODE *temp=create(),*cur;
    if(front==NULL&&rear==NULL)
    {
        front=rear=temp;
    }
    else
    {
       rear->link=temp;
       rear=temp;
    }
}
void *dequeue()
{
    NODE *cur;
    if(front==NULL)
    {
        printf("Empty\n");
    }
    else if(front->link==NULL)
    {
        free(front);
        front=NULL;
        rear=NULL;
    }
    else
    {
        cur=front;
        front=front->link;
        cur->link=NULL;
        free(cur);
    }
}
void display()
{
    NODE *cur;
    if(front==NULL&&rear==NULL)
    {
        printf("Empty\n");
    }
    else
    {
        cur=front;
        while(cur!=NULL)
        {
            printf("%d->",cur->n);
            cur=cur->link;
        }
        printf("\n");
    }
}
int main()
{
    int i;
    while(1)
    {
        printf("1:enqueue 2:dequeue 3:display 4:exit \n");
        scanf("%d",&i);
        switch(i)
        {
            case 1:insert();
            break;
            case 2:dequeue();
            break;
            case 3:display();
            break;
            case 4:exit(0);
            break;
        }
    }
    return 0;
}
