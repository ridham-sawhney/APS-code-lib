#include<stdio.h>

#define initial 1
#define waiting 2
#define visited 3
#define MAX 100
int ad[100][100],state[MAX],Q[100],n,fr=-1,re=-1;

void create();

void BFS_T();
void BFS(int );
void insert_q(int );
int deq();
int isempty();
int main()
{
    create();
    BFS_T();
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

void BFS_T()
{
    int v;
    for(int i=0;i<n;i++)
    {
        state[i]=initial;
    }


    printf("\nenter thr vertex you want to start from: ");
    scanf("%d",&v);
    BFS(v);
}




void BFS(int v)
{
    insert_q(v);
    state[v]=waiting;

    while(!isempty())
    {
         v=deq();
         state[v]=visited;
         printf("%d ",v);

         for(int i=0;i<n;i++)
         {
             if(ad[v][i]==1 && state[i]==initial)
             {
                 insert_q(i);
                 state[i]=waiting;
             }
         }

    }
}

void insert_q(int vertex)
{
       if(fr ==-1)
        fr=0;
        re=re+1;
       Q[re]=vertex;
}

int deq()
{
    int dlt;
    dlt=Q[fr];
    fr++;
    return dlt;
}

int isempty()
{
    if(fr==-1 || fr>re)
        return 1;
    else
        return 0;
}
