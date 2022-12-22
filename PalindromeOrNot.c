#include<stdio.h>
int main()
{
  int a,sum=0,n,i,r;

  printf("Enter the number");

  scanf("%d",&n);

  a=n;

  while(n>0)
  { 
    r = n%10;
    sum = sum*10+r;
    n= n/10;
  }
  if(sum==a)
    printf("%d is a Palindrome no.",a);

  else
    printf("%d is not a Palindrome no.",a);
  return 0;
}
