#include<stdio.h>
int main(){
    int n;
    printf("enter the any value");
    scanf("%d",&n);
    switch(n>0)
    {
        case 1:
    printf("the value is positive");
    break;
    case 0:
        switch(n<0)
    {case 1:
     printf("the value is negative");
     break;
     case 0:
     printf("zero");
     break;
    
    
    }
    }
    return 0;
}
