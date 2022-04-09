#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define max 10000000

int min(int a,int b)
{
    if(a<b)
        return a;
    else
        return b;

}
void build(int a[],int *tree,int low,int high,int pos)
{
    if(low==high)
    {
        tree[pos] = a[low];
        return;
    }



    int mid = (low+high) / 2;
    // Recurse on the left child
    build(a,tree,low,mid,2*pos+1);
    // Recurse on the right child
    build(a,tree,mid+1,high,2*pos+2);
    // Internal node will hold the minimum of two children
    tree[pos] = min(tree[2*pos+1],tree[2*pos+2]);




}


int rangemin(int * tree,int qlow,int qhigh,int low,int high,int pos)
{
    if(qlow<=low && qhigh>=high)
        return tree[pos];
     if(qlow>high || qhigh <low)
        return max;
     int mid=(low+high)/2;

     return min(rangemin(tree,qlow,qhigh,low,mid,2*pos+1),rangemin(tree,qlow,qhigh,mid+1,high,2*pos+2));

}

int main() {


    int n,t;
    scanf("%d %d",&n,&t);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    int size;

    int nextPowOf2 = (int)round(pow(2, ceil(log2(n))));
    size = 2 * nextPowOf2 - 1;

    int tree[size];


    for(int i=0;i<size;i++)
        tree[i]=max;

       build(a,tree,0,n-1,0);

//      for(int i=0;i<n;i++)
//         printf("%d ",a[i]);
//         printf("\n");

//          for(int i=0;i<size;i++)
//         printf("%d ",tree[i]);

      while(t--)
      {

          int r,s;
          scanf("%d %d",&r,&s);
          int x=rangemin(tree,r,s,0,n-1,0);
          printf("%d\n",x);

      }


    return 0;
}