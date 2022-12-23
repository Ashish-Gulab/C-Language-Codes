#include <stdio.h>

int main()
{
    float mm, cm, m, km;

    printf("\n Enter the Length in Kilometers (km)  :  ");
    scanf("%f", &km);

    m = km * 1000.0;
    cm = km * 100000.0;
    mm = km * 1000000.0;

    printf("\n %f Kilometers  = %f Meters", km, m);
    printf("\n %f Kilometers  = %f Centimeters", km, cm);
    printf("\n %f Kilometers  = %f Millimeters", km, mm);

    return 0;
}
