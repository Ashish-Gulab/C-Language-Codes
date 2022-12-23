#include<stdio.h>
#include<math.h>
 
int main()
{
  float p,r,t,c;

  printf("Enter Principle, Rate and Time: ");

  scanf("%f%f%f",&p,&r,&t);

  c=p*pow((1+r/100),t);

  printf("Compound Interest = %f",c);

  return 0;
}
