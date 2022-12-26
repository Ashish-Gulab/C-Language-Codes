#include<stdio.h>
#include<string.h>
struct employee
{
  int id;
  char name[10];
  struct date
  {
    int dd;
    int mm;
    int yyyy;
    }doj;
 }d1;

int main()
{
  d1.id = 202;
  strcpy(d1.name,"Ashish Gulab");
  d1.doj.dd=12;
  d1.doj.mm=10;
  d1.doj.yyyy=2016;
  printf("Employee id is: %d\n", d1.id);
  printf("Employee name :%s\n",d1.name);
  printf("Employee date of joining (dd/mm/yyyy):%d\t%d\t%d\n",d1.doj.dd,d1.doj.mm,d1.doj.yyyy);
  return 0; 
}
