#include <stdio.h>

int main() {
   float clan, maths, physics, chemistry, english, totalmarks;
   printf("enter the marks of c lang");
   scanf("%f",&clan);
    
   printf("enter the marks of maths");
   scanf("%f",&maths);
   
   printf("enter the marks of physics");
   scanf("%f",&physics);
   
   printf("enter the marks of chemistry");
   scanf("%f",&chemistry);
   
   printf("enter the marks of english");
   scanf("%f",&english);

totalmarks =( clan + maths + physics + chemistry + english);

   printf("\ntotal marks %f",totalmarks);
   printf("\naverage marks %f",(clan + maths + physics + chemistry + english)/6);
   printf("\npercentage %f",totalmarks/500*100);
   
   
    
    return 0;
}
