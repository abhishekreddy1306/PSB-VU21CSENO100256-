#include <stdio.h>

int main(){
    int a,b,c;
    printf("enter the three sides of the triangle ");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b+c!=180)
	{
    	printf("error in the angles of the triangle");
	}
	else if (a==b && b==c){
		printf("the triangle is equlilteral triangle");
	}else if (a==b || b==c || c==a){
		printf("the triangle is isocelen triangle");
	}else {
		printf("the triange is scalane triangle");
	}
	return 0;
	}
