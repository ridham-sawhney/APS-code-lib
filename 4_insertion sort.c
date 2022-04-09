
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


    for(int i=1;i<n;i++)
    {
        int temp=a[i];
        int j=i-1;
        while(j>=0 && a[j]>temp)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }



     for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);

    }
}

