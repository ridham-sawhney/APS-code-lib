#include<stdio.h>
#include<math.h>
int fib(int n);
int main()
{
    int n,i,f;
    printf("enter n\n");
    scanf("%d",&n);
    f=fib(n);
    printf("Sum %d",f);
    return 0;
}
int fib(int n)
{
    int res;
    if(n==1)
    {
        return 1;
    }
    else
    {
        res=pow(n,n)+fib(n-1);
        return res;
    }
}
