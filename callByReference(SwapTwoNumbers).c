#include <stdio.h>
void swap(int*,int*);
int main ()
{
  int a= 40;
  int b= 30;
  printf("Before swapping the value in main a=%d,b=%d\n",a,b);
  swap(&a,&b);
  printf("After swapping the value in main a=%d,b=%d\n",a,b);
}
void swap(int*a,int*b)
{
  int temp;
  temp= *a;
  *a=*b;
  *b=temp;
  printf("After swapping the values in function a=%d\n,b%d\n",*a,*b);
}
