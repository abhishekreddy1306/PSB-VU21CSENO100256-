#include<stdio.h>
main()
{
	int n=6,i,sum=0;
	for(i=1;i<=n/2;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
	}
	if(n==sum)
	printf("the nunber is perfect");
	else
	printf("not perfect");
	
}
