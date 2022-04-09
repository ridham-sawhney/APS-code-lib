#include<stdio.h>
#include<string.h>
int main()
{   int i,a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,l=0,m=0,n=0;
   char len[10000];
 scanf("%[^\n]%*c",&len);
  
    for(i = 0; len[i] != '\0'; ++i);


for(int k=0;k<i;k++)
   {
       if(len[k]=='0')
        a++;
       else if(len[k]=='1')
        b++;
         else if(len[k]=='2')
        c++;
         else if(len[k]=='3')
        d++;
         else if(len[k]=='4')
        e++;
         else if(len[k]=='5')
        f++;
         else if(len[k]=='6')
        g++;
         else if(len[k]=='7')
        h++;
         else if(len[k]=='8')
        l++;
         else if(len[k]=='9')
        m++;
   }
   printf("%d %d %d %d %d %d %d %d %d %d",a,b,c,d,e,f,g,h,l,m);
   return 0;

}
