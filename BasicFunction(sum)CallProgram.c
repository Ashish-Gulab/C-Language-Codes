#include <stdio.h>
void sum();

void main()
{
    printf("Calculate the difference of two numbers");
    sum();
}

void sum()
{   int a,b;
    printf("Enter the two numbers ");
    scanf("%d%d",&a,&b);
    printf("The difference of two numbers is %d",a-b);
}
