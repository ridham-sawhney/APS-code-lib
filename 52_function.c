#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d)
{       int sum=0;
     sum=a;
     {if (sum<b)
     {sum=b;
     }
     if (sum<c)
     { sum=c;
     }
     if (sum<d)
     {sum=d;
     }
     }
     return sum;
}
int main() {
    
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

