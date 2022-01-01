#include<stdio.h>
main()
{
	int tp=0,tc=1,i,n=10,s;
	
	for(i=1;i<=n;i++)
	{
		printf("%3d",s);
		
		tp=tc;
		tc=s;
		s=tp+tc;
		
	}
}
