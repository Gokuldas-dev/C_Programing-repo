//using temp variable
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{

  int num1,num2,temp;
  printf("Enter two Numbers : ");
  scanf("%d%d",&num1,&num2);
  temp = num1;
  num1 = num2;
  num2 = temp;

  printf("numbers are swaped NUM1: %d  NUM : %d",num1,num2);
  return 0;
  
}