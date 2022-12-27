#include <stdio.h>
 
int main()
{
  int i,j;    
  int num;

  for(i=1; i<=10; i++) 
  {
    num= i;   
    for(j=1; j<=10; j++)
    {            
      printf("%d×%d=%d\n",num,j,(num*j));
    }

    printf("\n");
  }
  return 0;
}
