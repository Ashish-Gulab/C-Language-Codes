#include <stdio.h>
int sum(int a, int b)
{
    int c=a+b;
    return c;
}

int main()
{
    int d =10;
    int f = 20;
    int s = sum(d, f);
    printf("%d",s);
    return 0;
} 
