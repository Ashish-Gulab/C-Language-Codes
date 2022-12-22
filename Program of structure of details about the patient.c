#include<stdio.h>
#include<string.h>
struct patients
{int id;
char name[40];

} d1,d2,d3,d4;

int main()
{
    d1.id = 201;
    strcpy(d1.name,"Ashish Gulab");
    d2.id = 301;
    strcpy(d2.name,"Harsh Gulab");
    d3.id = 401;
    strcpy(d3.name,"auavgsk");
    d4.id = 501;
    strcpy(d4.name,"jsyvenssnss");

    printf("patient 1 id is: %d\n", d1.id);
    printf("patient 1 name :%s\n",d1.name);
    printf("patient 2 id is: %d\n", d2.id);
    printf("patient 2 name :%s\n",d2.name);
    printf("patient 3 id is: %d\n", d3.id);
    printf("patient 3 name :%s\n",d3.name);

    printf("patient 4 id is: %d\n", d4.id);
    printf("patient 4 name :%s\n",d4.name);
    return 0; 
}
