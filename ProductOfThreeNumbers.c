#include<stdio.h>

int main()
{
  int a,b,c,p ;
  
  printf("Enter the numbers:");

  scanf("%d%d%d",&a,&b,&c);
  
  p = a*b*c;

  printf("The product = %d",p);
  
  return 0;
}
