#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  int x=0,y=0,z=0,p=0,q=0,r=0;
  int a[1000];
  for(int i=1;i<=n;i++)
  {
      a[i]=i;
      
      
   }
  for(int i=1;i<=n;i++)
  {
      for(int j=(i+1);j<=n;j++)
      {
        x=a[i]&a[j];
        y=a[i]|a[j];
        z=a[i]^a[j];
        if((x<k) && (x>p))
        {
            p=x;
        }
        if(y<k&&z>q)
        {
            q=y;
        }
        if(z<k&&z>r)
        {
            r=z;
        }
      }
  }
  printf("%d\n%d\n%d",p,q,r);

  
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
