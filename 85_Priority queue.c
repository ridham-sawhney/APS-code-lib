#include<stdio.h>
#include<stdlib.h>
struct node
{
    int n,p;
    struct node *link;
};
typedef struct node NODE;
NODE *rear=NULL,*front=NULL;
NODE *create()
{
    NODE *temp;
    temp=(NODE*)malloc(sizeof(NODE));
    temp->link=NULL;
    //printf("Enter process\n");
    scanf("%d",&temp->n);
   // printf("Enter priority\n");
    scanf("%d",&temp->p);
    return temp;
}
void inqueue()
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

void display()
{
    NODE *cur,*ptr;
    if(front==NULL&&rear==NULL)
    {
        printf("Empty\n");
    }
    else
    {   ptr=front;
        cur=front;
        while(cur->link!=NULL)
        {
            //printf("%d\t%d\n",cur->n,cur->p);
            cur=cur->link;
        }
        printf("%d\n%d\n",ptr->n,(ptr->p+((cur->p)/2)));
        printf("%d\n%d\n\n\n\n",cur->n,(cur->p+((ptr->p)/2)));

    }
}
void sort()
{
    int swap,prt;
    NODE *cur,*ptr;
    if(front==NULL&&rear==NULL)
    {
        printf("Empty queue\n");
    }
    else
    {
        cur=front;
        while(cur->link!=NULL)
        {
            ptr=cur->link;
            while(ptr!=NULL)
            {
                if(cur->p<ptr->p)
                {
                    swap=cur->n;
                    prt=cur->p;
                    cur->n=ptr->n;
                    cur->p=ptr->p;
                    ptr->n=swap;
                    ptr->p=prt;
                }
                ptr=ptr->link;
            }
            cur=cur->link;
        }
    }
}
int main()
{
    int i;
    int N;
    scanf("%d",&N);
    for(int i=0;i<N;i++)
    {
        inqueue();
    }
    sort();
    display();
    return 0;
}
