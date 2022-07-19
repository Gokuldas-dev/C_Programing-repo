//Function with argument
#include<stdio.h>
#include<stdlib.h>
void sum();
int main()
{
  int a,b;
  printf("Enter Two Numbers:");
  scanf("%d%d",&a,&b);
  sum(a,b);
  return 0;
}

void sum(int num1,int num2){
  int sum;
  sum = num1 + num2;
  printf("Sum Is: %d",sum);
  
}