#include<stdio.h>
int main()
{
    int arr[5];
    long int x=0,max,min;
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<5;i++)
    {
   max=arr[0];
        if(max<arr[1])
        {
            max=arr[1];
        }
         if(max<arr[2])
        {
            max=arr[2];
        }
          if(max<arr[3])
        {
            max=arr[3];
        }
          if(max<arr[4])
        {
            max=arr[4];
        }
    }
        for(int i=0;i<5;i++)
    {
   min=arr[0];
        if(min>arr[1])
        {
            min=arr[1];
        }
         if(min>arr[2])
        {
            min=arr[2];
        }
          if(min>arr[3])
        {
            min=arr[3];
        }
          if(min>arr[4])
        {
            min=arr[4];
        }
    }


for(int i=0;i<5;i++)
{
    x=x+arr[i];
}

printf("%ld %ld",x-max,x-min);
    return 0;
}
