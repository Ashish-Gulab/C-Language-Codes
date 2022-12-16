#include<stdio.h>
int rec(int n);
int main() 
{
    int n;
    
    printf("Enter a number: ");
    
    scanf("%d",&n);

    printf("Factorial of %d = %d", n, rec(n));
   return 0;
}

 int rec(int n) 

{
    if (n>=1)
      return n*rec(n-1);
    else
        return 1;
}
