#include <stdio.h> 

void value(); 

void main() 
{ 

    value(); 
} 

void value() 
{ 
    int a,b,c;
    
    printf("Enter the two numbers");
    
    scanf("%d%d",&a,&b);
    
    c=a*b;
  

    printf("The product of two numbers is %d",c); 
} 
