#include<stdio.h>
int main(){
	int a;
	printf("enter the year");
	scanf("%d",&a);
	if (a%4==0){
		printf("its leap year");
	}else{
		printf("its not leap year");
	}
	return 0;
}
