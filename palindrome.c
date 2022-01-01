#include<stdio.h>
main()
{
	int ori=123,rev=0,rem,a;
	a=ori;
	while(ori>0)
	{
	rem=ori/10;
	rev=rev*10+rem;
	ori=ori/10;
}
if(rev==a)
printf("palindrome");
else
printf("not");

}
