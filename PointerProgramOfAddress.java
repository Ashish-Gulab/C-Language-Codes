#include<stdio.h>
#include<string.h>
int main ()
{
    int*pc,c;
    c=49;
    printf("Address of C is %p\n",&c);
    printf("value of c is %d\n\n",c);
    pc=&c;
    printf("Address of pointer pcis %p\n",pc);
    printf("content of pointer pc is %d\n\n",*pc);
    return 0;
}
