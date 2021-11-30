#include <stdio.h>

int main(){
    int a,b,c;
    printf("enter the three sides of the triangle ");
    scanf("%d%d%d",&a,&b,&c);
    if (a==b && b==c)
    {
        printf("the triangle is an equilateral triangle");
    }
    else if (a==b || a==c || b==c){
        printf("tne triangle is an isoseles triangle");
    }

    else if (a!=b &&b!=c &&c!=a)
	{
    printf("the tringle is an scalane triangle");
    }
return 0;
}
