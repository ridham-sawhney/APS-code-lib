
#include<stdio.h>
#include<stdlib.h>


int main()
{
    int n ,a[100];
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }


    for(int i=0;i<n;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {

            if(a[j]<a[i])
            {
                min=j;
            }
        }
        if(min!=i)
        {
                int x=a[min];
                a[min]=a[i];
                a[i]=x;
        }
    }



     for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);

    }
}
