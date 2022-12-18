#include <stdio.h>
void main ()
{
  FILE*fptr;
  int id;
  char name[30];
  float salary;
  fptr = fopen("Array program.c","w+");
  if(fptr== NULL)
  {
    printf("File does not exist\n");
    return;
  }
  printf("Enter the id\n");
  scanf("%d",&id);

  printf("Enter the name\n");
  scanf("%s",name);

  fprintf(fptr,"Name= %s\n",name);
  printf("Enter the salary");
  scanf("%f",& salary);
  
  fprintf(fptr,"Salary= %2f\n", salary);
  fclose(fptr);
}
