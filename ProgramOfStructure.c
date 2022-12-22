#include<stdio.h>
#include<string.h>
struct employee
{
    int id;
    char name[30];
} d1;

int main()
{
    d1.id = 201;
    strcpy(d1.name,"Ashish Gulab");
    printf("Employee 1 id: %d\n",d1.id);
    printf("Employee 1 name :%s\n",d1.name);
    return 0; 
}
