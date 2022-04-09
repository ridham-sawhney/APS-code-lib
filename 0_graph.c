#include<stdio.h>

struct node
{
    int data;
    struct node *next;
};
void read(struct node *ad[],int);
void print(struct node *ad[],int n);
int main()
{
    int n;
    printf("Enter the no of nodes :");
    scanf("%d",&n);
struct node *ad[n];
   for(int i=0;i<n;i++)
    {
        ad[i]=NULL;
    }
read(ad,n);
print(ad,n);

    return 0;
}


void read(struct node *ad[],int n)
{
    int i,j,k,l;
    struct node *newnode;
    for(int i=0;i<n;i++)
    {
        struct node* last=NULL;
        printf("\nEnter the no of neighbours of node %d :",i+1);
        scanf("%d",&k);
        for(j=0;j<k;j++)
        {
            printf("\nEnter the value at %d neighbour of node %d : ",j+1,i+1);
            scanf("%d",&l);
            newnode=(struct node*)malloc(sizeof(struct node*));
            newnode->data=l;
            newnode->next=NULL;
            if(ad[i]==NULL)
                ad[i]=newnode;
            else
            last->next=newnode;
            last=newnode;
        }
    }
}

void print(struct node *ad[],int n)
{
    int i,j,k;
    struct node *ptr=NULL;
    for(i=0;i<n;i++)
    {
       ptr=ad[i];
       printf("\n neighbours of node %d :",i+1);
       while(ptr!=NULL)
       {
           printf("%d ",ptr->data);
           ptr=ptr->next;
       }
       printf("\n");
    }

}

