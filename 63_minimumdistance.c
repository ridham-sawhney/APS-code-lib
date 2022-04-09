#include<stdio.h>
int main()
{
    int x,count=0,k=0,min,l=-1;
    scanf("%d",&x);
    int ar[x];
    for(int i=0;i<x;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(int i=0;i<x;i++)
    {
        for(int j=i+1;j<x;j++)
        {
            if(ar[i]==ar[j])
            {
                count++;
            }
        }
    }
  if(count==0)
  printf("%d",l);
  else if(count>0){
    int br[count];
    for(int i=0;i<x-1;i++)
    {
        for(int j=i+1;j<x;j++)
        {
            if(ar[i]==ar[j])
            {
                br[k]=j-i;
            
            k++;
            }

        }
    }
    min=br[0];
    for(int i=0;i<count;i++)
    {
        if(min>br[i])
        {
            min=br[i];
        }
    }
     printf("%d",min);
  }
    return 0;

}
