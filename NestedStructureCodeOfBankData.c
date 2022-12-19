#include<stdio.h>
#include<string.h>
struct bank_detail
{
  char bank_name[35];
  char branch[35];
  int branch_code;
}bank_data;
struct customers_detail
{
  char name[50];
  int UPI;
  float amount;
  struct bank_detail bank_data;
}cust_data;
int main ()
{
  struct customers_detail cust_data={"Ashish Gulab",55,375848.45,"state bank","dehwa",344};
  printf("customer name is %s\n",cust_data.name);
  printf("customer upi is %d\n",cust_data.UPI);
  printf("customer amount is %f\n",cust_data.amount);
  printf("bank name is %s\n",cust_data.bank_data.bank_name);
  printf("branch is %s\n",cust_data.bank_data.branch);
  printf("branch code is %d\n",cust_data.bank_data.branch_code);
}
