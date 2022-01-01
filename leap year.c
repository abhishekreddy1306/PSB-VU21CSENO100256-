#include<stdio.h>
main()
{
	int year;
	printf("year");
	scanf("%d",&year);
	if(year%400==0)
	printf("leap year");
	else
	if(year%100==0)
	printf("not leap year");
	else
	if(year%4==0)
	printf("leap");
	else
	printf("not leap");
}
