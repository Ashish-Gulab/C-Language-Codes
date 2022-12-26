#include<stdio.h>
#include<string.h>
int main ()
{
  char ch1[20] = {'h','e','l','l','o','w','o','r','d'};
  char ch2[20];
  strcpy(ch2,ch1);

  printf("Value of second string is %s",ch2);

  return 0;
}
