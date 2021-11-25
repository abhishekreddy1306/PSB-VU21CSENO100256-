#include <stdio.h>

int main()
{
    int a,b,c,d;
    a=10;
    b=20;
    c=30;
    a=b;
    b=c;
    c=a;
    d=b;
    printf("the value of c %d",d);

    return 0;
}


