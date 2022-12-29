#include<stdio.h>
#include<string.h>
void main ()
{
  char chars[7] = "Gulab";
  int i=0;
  int count=0;
  while(s[i]!= NULL)
  {
    if(s[i]=='a'|| s[i]=='e'|| s[i]=='i'||s[i]=='o'||s[i]=='u' ) 
    { 
      count++;
    }
    i++;
  }
  printf("The number of vovels is %d",count);
}
