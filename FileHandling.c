#include <stdio.h>
void main ()
{
  FILE*fp;
  char ch;
  fp =fopen("Array program.c","r");
  while(1)
  {
    ch = fgetc(fp);
    if(ch==EOF)
      break;
    printf("%c",ch);
  }
  fclose(fp);
}
