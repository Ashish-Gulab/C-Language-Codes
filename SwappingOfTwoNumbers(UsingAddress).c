
#include <stdio.h>
 
int main()
{
   int x, y, *a, *b, c;
 
   printf("Enter the value of x,y");
   scanf("%d%d", &x, &y);
 
   printf("Before Swapping\n x = %d\ny = %d\n", x, y);
 
   a = &x;
   b = &y;
 
   c = *b;
   *b = *a;
   *a = c;
 
   printf("After Swapping\n x = %d\ny = %d\n", x, y);
 
   return 0;
}
