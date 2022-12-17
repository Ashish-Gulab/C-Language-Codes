#include<stdio.h>

int main()
{ 
  int a= 10,b = 10,c = 20;
  printf("%d == %d \n",a,b,a==b);
  printf("%d == %d \n",a,c,a==c);
  printf("%d > %d \n",a,b,a>b);
  printf("%d > %d \n",a,c,a>c); 
  printf("%d < %d \n",a,b,a<b);
  printf("%d < %d \n",a,c,a<c);
  printf("%d != %d \n",a,b,a!=b);
  printf("%d != %d \n",a,c,a!=c);
  printf("%d >= %d \n",a,b,a>=b);
  printf("%d >= %d \n",a,c,a>=c);
  printf("%d <= %d \n",a,b,a<=b);
  printf("%d <= %d \n",a,c,a<=c);
  return 0;
}
