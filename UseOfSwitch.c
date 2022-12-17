#include<stdio.h> 

int main()
{       
    int a, b, result;
    char operator; 
    
    printf("Enter an expression: ");
    scanf("%d%c%d", &a, &operator, &b);

    switch(operator)
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
    
    return 0; 
    }
