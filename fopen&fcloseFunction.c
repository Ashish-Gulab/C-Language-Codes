#include <stdio.h>
#include <stdlib.h>

int main()
{
  char n[12];

  FILE *fptr;

  fptr = fopen("C:\\ gulab.c","w");

  if(fptr == NULL)
  {
    printf("Error!");   
    exit(1);             
  }

  printf("Enter your name ");
  scanf("%c",&n);

  fprintf(fptr,"Name = %c\n",n);

  fclose(fptr);

  return 0;
}
