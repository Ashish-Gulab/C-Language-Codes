#include<stdio.h>
#include<string.h>
struct student_college_detail
{
  int college_id;
  char college_name[30];
};


struct student_detail
{
  int id;
  char name[10];
  float percentage;
  struct student_college_detail clg_data;
}stu_data, *stu_data_ptr;

int main()
{
  struct student_detail stu_data={2,"Ashish",91,733564,"recb"};
  stu_data_ptr = &stu_data;
  printf("Student id is %d\n",stu_data_ptr->id);
  printf("Student name is %s\n",stu_data_ptr->name);
  printf("Student percentage is %f\n",stu_data_ptr->percentage);
  printf("Student college I'd is %d\n",stu_data_ptr->clg_data.college_id);
  printf("Student college name is %s\n",stu_data_ptr->clg_data.college_name);
  return 0;
}

