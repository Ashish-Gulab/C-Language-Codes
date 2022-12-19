#include <stdio.h>
int main() {
   int i, j, rows;

   printf("Enter the number of rows ");

   scanf("%d", &rows);

   for (i = 1; i <= rows; i++) 
   {
      for (j = 1; j <= i; j++) 
      {
         printf("* ");
       
      }
      printf("\n");
  
   }
   return 0;
}

 /*Step1:Start.
 Step 2: Let i be an integer number.
 Step 3: Let j be an integer number.
 Step 4: Set i = 1 and check i<=rows;
 Step 5: Set j = 1 and check j <= i;
 Step 6: Print ("*").
 Step 7: Space using "\n".
 Step 8: Stop*/

    
