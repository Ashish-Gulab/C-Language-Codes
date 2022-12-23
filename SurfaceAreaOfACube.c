#include<stdio.h>

int main()
{

    float a;
    float s,v;

    printf("Enter size of any side of a cube : ");
    scanf("%f",&a);

    s = 6 * (a * a);
    v = a * a * a;

    printf("Surface area of cube is: %f",s);
    printf("\nVolume of cube is : %f",v);

    return 0;
}
