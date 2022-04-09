#include<stdio.h>

#define initial 1
#define waiting 2
#define visited 3
#define MAX 100
int ad[100][100],state[MAX],s[100],n,top=-1;

void create();
void DFS_T();
void DFS(int );
void insert_s(int );
int pop();
int isempty();
int main()
{
    create();
    DFS_T();
}
void create()
{
    int or,des;
    printf("Enter no of vertices:");
    scanf("%d",&n);
    int max_edges=n*(n-1);
    for(int i=1;i<max_edges;i++)
    {
        printf("Enter edge %d(-1 -1 to quit) ",i);
        scanf("%d %d",&or,&des);
        if(or==-1 && des==-1)
            break;
        if(or>=n || des>=n || or<0 || des<0)
        {
            printf("Invalid input");
            i--;
        }

        else
            ad[or][des]=1;
    }
}

void DFS_T()
{
    int v;
    for(int i=0;i<n;i++)
    {
        state[i]=initial;
    }


    printf("\nenter thr vertex you want to start from: ");
    scanf("%d",&v);
    DFS(v);
}




void DFS(int v)
{
    insert_s(v);


    while(!isempty())
    {
         v=pop();



         if(state[v]==initial)
         {
             printf("%d ",v);
             state[v]=visited;
         }
         for(int i=n-1;i>=0;i--)
         {
             if(ad[v][i]==1 && state[i]==initial)
             {
                 insert_s(i);

             }
         }

    }
}

void insert_s(int vertex)
{

top++;
       s[top]=vertex;

}

int pop()
{
    int dlt;
    dlt=s[top];
    top--;
    return dlt;
}

int isempty()
{
    if(top==-1)
        return 1;
    else
        return 0;
}
