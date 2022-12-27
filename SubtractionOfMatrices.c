#include<stdio.h>    
int main()
{  
  int r,c,a[100][100],b[100][100], subtraction[100][100],i,j;    

  printf("Enter the number of row ");    
  scanf("%d",&r);    
  printf("Enter the number of column ");    
  scanf("%d",&c);    
  printf("\nEnter the elements of first matrix\n ");    
  for(i=0;i<r;i++)    
  {    
    for(j=0;j<c;j++)    
    {   
      printf("Enter the element a%d%d: ",i+1,j+1);
      scanf("%d",&a[i][j]);    
    }    
  }    
  printf("\nEnter the elements of 2nd Matrix\n ");    
  for(i=0;i<r;i++)    
  {    
    for(j=0;j<c;j++)    
    {
      printf("Enter the element b%d%d ",i+1,j+1);
      scanf("%d",&b[i][j]);    
    }    
  }    
  
  for(i=0;i<r;i++)    
  {    
    for(j=0;j<c;j++)    
    {     
      subtraction[i][j]=a[i][j]-b[i][j];    
    }    
  }    

  printf("\n Subtraction of the two matrices is \n");
  for(i=0;i<r;i++)    
  {    
    for(j=0;j<c;j++)    
    {    
      printf("%d", subtraction[i][j]);    
      if(j==c-1)
      { 
        printf("\n\n");    
      }    
    }
  }
  return 0;  
}  
