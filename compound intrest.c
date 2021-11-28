#include <stdio.h>
#include<math.h>


int main() {
    float CI, principle, interest, time;
    printf("enter the value principle amount ;");
    scanf("%f",&principle);
    printf("\nenter the value interest :");
    scanf("%f",&interest);
    printf("\nenter the time period :");
    scanf("%f",time);
    CI = principle * (pow((1+interest/100),time));
    printf("%f",CI);
   
    
    return 0;
}
