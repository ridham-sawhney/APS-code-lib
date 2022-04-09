#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function
int temp=0,s;
temp=*a;
s=*b;
*a=temp+s;

*b=abs(temp-s);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}


