#include<stdio.h>
#include<string.h>
int main ()
{
  char str[10];
  printf("Enter string");
  gets(str);
  printf("String is %s",str);
  printf("\n Reverse of string is %s",strrev(str));
  return 0;
}
