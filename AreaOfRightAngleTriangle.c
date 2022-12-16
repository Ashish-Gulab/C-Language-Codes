// Area of triangle 

#include<stdio.h>
 int main()
  { 
    int base ,height,area;

    printf("Enter the base of triangle");

    scanf("%d",&base);

    printf("Enter the height of triangle");

    scanf("%d",&height);

    area= (base*height)*0.5;

    printf("Area of triangle is %d",area);
  }
