#include<stdio.h>
#include<stdlib.h>

main()
{
    int n,a[100];
    scanf("%d",&n);

    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i]<a[j])
            {
                int x=a[i];
                a[i]=a[j];
                a[j]=x;
        }
    }

    }
     for(int i=0;i<n;i++)
        printf("%d ",a[i]);


}
