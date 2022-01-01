#include<stdio.h>
main()
{
	int n;
	printf("Enter a number :");
	scanf("%d",&n);
	if(n%5==0 && n%11==0)
	printf("The given number is divisible by 5 and 11");
	else
	printf("The given number is not divisible by 5 and 11");
	
}
