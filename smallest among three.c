#include<stdio.h>
main()
{
	int a,b,c,s,r;
	printf("enter");
	scanf("%d%d%d",&a,&b,&c);
	s=(a<b)?a:b;
	r=(s<c)?s:c;
	printf("%d",r);
}
