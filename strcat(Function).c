#include<stdio.h>
#include<string.h>
int main ()
{
 char ch1[20] = {'A','s','h','i','s','h'};
char ch2[20]= {'G','u','l','a','b','\0'};

strcat(ch1,ch2);

printf("Value of first string is %s",ch1);

return 0;}
