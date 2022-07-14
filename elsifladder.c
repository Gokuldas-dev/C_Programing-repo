#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
  int choice,num1,num2,result;
  printf("Enter two numbers : ");
  scanf("%d%d",&num1,&num2);
  printf("Select a Operation \n 1.Addition \n 2Substraction\n3.Multiplication\n4.Division\n");
  scanf("%d",&choice);
  if(choice == 1)
  {
    result = num1 + num2; 
    printf("Result : %d",result);
  }
  else if(choice == 2)
  {
    result = num1 - num2;
    printf("Result : %d",result);
  }
  else if(choice == 3)
  {
    result = num1 * num2;
    printf("Result : %d",result);
  }
  else if(choice == 4)
  {
    result = num1 / num2;
    printf("Result : %d",result);
  }
  else
  {
    printf("U r a Fooll!!!");
  }
  

  return 0;
}