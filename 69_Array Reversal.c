#include <stdio.h>
#include <stdlib.h>

int main()
{
   long n, arr[1000],arr2[1000],i,j;

    scanf("%ld",&n);

    for(i=0;i<n;i++)
    {
        scanf("%ld",&arr[i]);
    }

    for(j=0;j<n;j++)
    {
    arr2[n-j-1]=arr[j];
    }

    for(i=0;i<n;i++)
    {
       printf("%ld ",arr2[i]);
    }
   
    return 0;
}

