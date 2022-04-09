#include<stdio.h>




void heapsort(int a[],int n)
{
    for(int i=(n/2)-1;i>=1;i--)
    {
        heapify(a,n,i);
    }
    for(int i=n-1;i>=1;i--)
    {
        int x=a[0];
        a[0]=a[i];
        a[i]=x;
        heapify(a,n,0);
    }
};




void heapify(int a[],int n,int i)
{
    int largest=i;
    int l=2*i;
    int r=2*i+1;
    while(l<=n && a[l]>a[largest])
    {
      largest=l;
    }
    while(r<=n && a[r]>a[largest])
    {
      largest=r;
    }

    if(largest!=i)
    {
        int x=a[i];
        a[i]=a[largest];
        a[largest]=x;
        heapify(a,n,largest);
    }
};
int main()
{
    int n;
    int a[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }


    heapsort(a,n);

    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
