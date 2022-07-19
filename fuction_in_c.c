#include<stdio.h>
#include<stdlib.h>
void sum(); //Function with out Argument with our Return Value
int main()
{
  sum();
  return 0;
}

void sum(){
  int num1,num2,sum;
  printf("Enter Two Numbers :");
  scanf("%d%d",&num1,&num2);
  sum = num1 + num2;
  printf("Result is :%d\n",sum);
}