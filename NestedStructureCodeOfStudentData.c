#include<stdio.h>    
#include<string.h>
struct student_college_detail
{ 
  int college_id;
  char college_name[30];
};
struct student_detail;
{
  int id;
  char name[20];
  float percentage;
  struct student_college_detail clg_data;
}stu_data;
int main()
{  
  struct student_detail stu_data ={2,"Ashish",90.8,81223,"ABC University"
  };
  printf("Id is %d\n",stu_data.id);
  printf("Name is %d\n",stu_data.name);
  printf("Percentage is %f\n\n",stu_data.percentage);
  printf("College Id is %d\n",stu_data.clg_data.college_id);
  printf("College Name is %s\n",stu_data.clg_data.college_name);
  return 0;
}
