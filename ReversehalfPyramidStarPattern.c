#include <stdio.h>
int main()
 {
   int i, j, rows;

   printf("Enter the number of rows ");

   scanf("%d", &rows);

   for (i = rows; i >= 1; i--) 
   {
      for (j = 1; j <= i; j++) 
      {
         printf("* ",j);
      }
      printf("\n");
   }
   return 0;
}

/*Step1:Start.
 Step 2: Let i be an integer number.
 Step 3: Let j be an integer number.
 step 4: Take input from the programmer.
 Step 5: Set i = rows and check i>=i;
 Step 6: Set j = 1 and check j <= i;
 Step 7: Print ("*").
 Step 8: Space using "\n".
 Step 9: Stop*/

    
