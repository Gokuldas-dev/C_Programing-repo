#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){

  int num1,num2,num3;
  printf("Enter Three  Numbers :");
  scanf("%d%d%d",&num1,&num2,&num3);
  if(num1>num2)
  {
    if(num1>num3)
    {
      printf("Largest number is :%d",num1);
    }

  }
  else
{
  if(num2>num3)
  {
    printf("Larget number is :%d",num2);
  }
  else
  printf("Larget number is %d",num3);
}
  
}