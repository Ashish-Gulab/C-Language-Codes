#include<stdio.h>

int main()
{ 
  char a;
  printf("Enter the alphabet:");

  scanf("%c",&a);

  if(a>='a' && a<= 'z')

  {
    printf("%c is lower case alphabet",a);

  }
  else

  {
    printf("%c is an upper case alphabet",a);
  }

  return 0;

}
    
