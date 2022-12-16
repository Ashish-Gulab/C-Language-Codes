#include <stdio.h>

struct MyData
{
    char *m_name;
    int m_age;
};
int main()
{
    struct MyData my;
    my.m_name = "Ashish Gulab";
     my.m_age = 18;

 printf("My Name is: %s", my.m_name);
   
  printf("My Age is: %d", my.m_age);
     return 0;
    
  }
