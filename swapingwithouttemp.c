#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
  int a,b;
  printf("Enter Two Numbers :" );
  scanf("%d%d",&a,&b);
  a = a+b;
  b = a-b;
  a = a-b; 
  printf("two swaped numbers are : %d %d",a,b);

  return 0;
}