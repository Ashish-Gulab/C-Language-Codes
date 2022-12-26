#include<stdio.h>
#include<string.h>
struct employee
{
  int id;
  char name[40];
  float salary;
} d1,d2;

int main()
{
  d1.id = 201;
  strcpy(d1.name,"Ashish Gulab");
  d1.salary=30000;
  d2.id = 301;
  strcpy(d2.name,"Harsh Gulab");
  d2.salary=20000;
  printf("Employee 1 id is: %d\n", d1.id);
  printf("Employee 1 name :%s\n",d1.name);
  printf("Employee 1 salary :%f\n",d1.salary);
  return 0; 
}
