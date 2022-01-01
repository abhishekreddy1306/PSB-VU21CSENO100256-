#include<stdio.h>
main()
{
	int n,v=1;
	printf("enter");
	scanf("%d",&n);
	while(n>0)
	{
		v=n*v;
		n=n-1;
		
	}
	printf("%d",v);
	
}
