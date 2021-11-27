#include<stdio.h>

int main(){
   printf("\ninput = 1 //converting time - hours to minutes, hours to sec");
   printf("\ninput = 2 //converting distance - km to meters");
   printf("\ninput = 3 //converting area to square");
   printf("\ninput = 4 //finding volume of cubiod");
   printf("\ninput = 5 //coverting temperature-Fto Cand Cto F");

   int i;
   printf("\nEnter the input:");
   scanf("%d",&i);

   switch (i){
   case 1:
   printf(" converting time");

   float h,m,s;
   printf("enter the time in hour");
   scanf("%f",&h);
   m=h*60;
   s=h*60*60;
   printf("%f",m);
   printf("%f",s);
   break;

   case 2:
   printf(" converting distance");
   float km,mt;
   printf("enter the km");
   scanf("%f,&km");
   mt = km*1000;
   printf("distance in meters:%f",mt);
   break;

   case 3:
   printf(" finding areas of squares");
   float side;
   printf("enter the side of square");
   scanf("%f",&side);
   printf("the area of square:%f",side*side);
   break;

   case 4:
   printf("find volume of cuboid");
   float l,b,ht;
   printf("enter the l,b,ht:");
   scanf("%f%f%f",&l,&b,&ht);
   printf("the volume of cubiod: %f",l*b*ht);

   break;

   case 5:
   printf("conversion of temperature");
   float c;
   printf("enter the temp in celsius");
   scanf("%f",&c);
   printf("temp in farenheit: %f",(c*1.8)+32);
   break;

   default:
   printf("enter correct input value");
   break;

   }
   return 0;
}
