#include<stdio.h>
int main ()
{
  printf("%d",fun());
  printf("\n%d",fun());
  return 0;
}
int fun()
{
  static count =0;
  count++;
  return count;
}
