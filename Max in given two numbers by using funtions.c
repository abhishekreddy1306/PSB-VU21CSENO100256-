#include<stdio.h>
int max(int i, int j){
 if(i<j){
     printf("max number is :%d",j);
 }
 else{
     printf("max number is :%d",i);
 }
}
int main(){
    int a,b;
    printf("enter your values respectively");
    scanf("%d %d",&a,&b);
    max(a,b);
}
