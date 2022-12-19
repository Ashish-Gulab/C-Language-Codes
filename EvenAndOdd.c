#include <stdio.h>  
int main()  
{  
   int a;
   printf("Enter the number");
   scanf("%d",&a);
   if(a%2==0)
      printf("%d is even ",a);

   else
      printf("%d is an odd number",a);

   return 0;
}
