#include<stdio.h>
  int main()
{ 
  int a[10];

  int i;

    printf("Enter 5 number ");
    
    for(i=0;i<5;i++)
    
    scanf("%d",&a[i]);
    
    printf("element of array are ");
    
    for(i=0;i<5;i++) 
    
    printf("%d ",a[i]);
    
    return 0;
