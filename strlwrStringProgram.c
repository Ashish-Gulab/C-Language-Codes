#include<stdio.h>
#include<string.h>
int main ()
{
  char str[10];
  printf("Enter string");
  gets(str);
  printf("String is %s",str);
  printf("\n Lower of string is %s",strlwr(str));
  return 0;
}
