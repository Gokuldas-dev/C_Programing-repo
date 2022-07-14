#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{

  float number1,number2,number3,avg_sum;
  printf("Enter three Numbers : ");
  scanf("%f%f%f",&number1,&number2,&number3);
  avg_sum = (number1+number2+number3)/3;
  printf("Average of Three Numbers are : %f",avg_sum);

  return 0;
  
}