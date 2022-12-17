#include <stdio.h>
void increment(int *var)
{
  *var = *var-3;
}
int main()
{
  int num=40;

  increment(&num);
  printf("Value of num is: %d", num);
  return 0;
}
