#include<stdio.h> 
 main()
{       
    int a, b, result;
    char op; 
    printf("Enter operand");
    scanf("%c",&op);
    printf("Enter 1st number: ");
    scanf("%d",&a);
    printf("Enter 1st number: ");
    scanf("%d",&b);

    switch(op)
    {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            result = a / b;
            break;              
    }
    
    printf("Result = %d", result);
    
    
}
