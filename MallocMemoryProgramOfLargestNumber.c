#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n, *ptr;
  printf("Enter the total number of elements: ");
  scanf("%d", &n);

  ptr = (int *) malloc(n* sizeof(int));
  if (ptr == NULL) 
  {
    printf("Error!!! memory not allocated.");
    exit(0);
  }

  for (int i = 0; i < n; i++) 
  {
    printf("Enter number %d: ", i + 1);
    scanf("%d", ptr + i);
  }

  for (int i = 1; i < n; i++)
  {
    if (*ptr < *(ptr + i))
    {
      *ptr = *(ptr + i);
    }
  }
  printf("Largest number = %d", *ptr);

  free(ptr);

  return 0;
}
