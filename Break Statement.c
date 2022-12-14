#include <stdio.h>

int main()
{
    int i;

  
    for(i=0; i<10 ; i++)
    {
        printf("%d\n",i);
     if(i==4)
    break;
    }
    printf("came outside of the loop i=%d",i);

    return 0;
}

/***********************************************************OUTPUT*****************************************************************************/

0
1
2
3
4
came outside of the loop i=4
