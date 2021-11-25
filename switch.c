#include <stdio.h>
int main()
{
	int ch;
	float a,b,c,d,e,f;
	printf("enter the operations,\n1.addition \n2.subtraction \n3.multiplication \n4.division");
	scanf("%d",&ch);
    printf("enter the values of two number a,b: ");
    scanf("%f%f",&a,&b);
    switch(ch)
    {
        case 1:
           c=a+b;
           printf("%f",c);
           break;
        case 2:
           d=a-b;
           printf("%f",d);
           break;
        case 3:
           e=a*b;
           printf("%f",e);
           break;
        case 4:
           f=a/b; 
           printf("%f",f);
           break;
    }
    return 0;
}

