#include <stdio.h>
int main() {
    
     int x,j;
    
    for(x=1;x<=4;x++)
    {
        printf("\n ");
        for(j=x;j>0;j--)
        {
            printf("%d ",j);
        }
        
    }
    return 0;
}


/**********************************************OUTPUT******************************************************************************************************/
1
2 1
3 2 1
4 3 2 1
