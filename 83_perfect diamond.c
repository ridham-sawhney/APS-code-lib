#include <stdio.h>
#include <stdlib.h>

int main()
{   int n,x;
    scanf("%d",&n);
    x=n-1;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=x;j++)
          {
             printf(" ");
          }
          x--;

        for(int k=1;k<=(i+1);k++)
           {
             printf("* ");
           }
           printf("\n");
    }
x=1;
     for(int i=(n-1);i>0;i--)
    {
        for(int j=0;j<=x;j++)
          {
             printf(" ");
          }
          x++;

        for(int k=0;k<=(i-1);k++)
           {
             printf("* ");
           }
           printf("\n");
    }
    return 0;
}
