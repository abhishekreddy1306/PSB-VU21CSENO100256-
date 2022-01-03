#include <stdio.h>
int abhi(int i,int j)
{
	int s,k;
    https://www.onlinegdb.com/online_c_compiler#editor_1for( s= i;s<=j; s++){
        if(s%2==0){
        printf("%d ",s);
	    }
    }
    printf("\n");
    for(k=i; k<=j; k++){
        if(k%2==1){
        printf("%d ",k);
	    }
    }
}


int main(){
    abhi(20,30);
}
