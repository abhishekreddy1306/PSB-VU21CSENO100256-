#include<stdio.h>
main()
{
	int dec=5,bin=0,rem,i=1;
	while(dec>0)
	{
		rem=dec%2;
		dec=dec/2;
		
		bin=bin+rem*i;
		i=i*10;
	}
	printf("%d",bin);
}
