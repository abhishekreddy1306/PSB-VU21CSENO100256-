#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    printf("enter the coefficents of the quadratic equations");
    scanf("%d%d%d",&a,&b,&c);
    float D= b*b-4*a*c;
    if(D==0)
    {
        printf("the roots are real %f",(-b+sqrt(D))/2*a);
        printf("%f",(-b-sqrt(D))/2*a);
    }
    else if(D>0){
         printf("the roots are real %f",(-b+sqrt(D))/2*a);
        printf("%f",(-b-sqrt(D))/2*a);
    }
    else if (D<0){
        printf("the roots are imaginary %f",(-b+sqrt(D))/2*a);
        printf("%f",(-b-sqrt(D))/2*a);
    }
}
