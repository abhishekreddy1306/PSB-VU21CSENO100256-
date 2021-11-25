#include <stdio.h> 
#include <math.h>
int main() 
{ int base, exponent, result = 1; 
printf("Enter the Base & Exponent values:\n"); 
scanf("%d%d", &base, &exponent);
result = pow(base, exponent); 
printf("\nResult: %d^%d = %d\n", base, exponent, result); 
return 

