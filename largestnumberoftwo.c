#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){

int num1,num2;
printf("Enter Two Numbers :  ");
scanf("%d%d",&num1,&num2);
if(num1<num2)
{
  printf("%d Is Larger Than %d",num2,num1);
}
else{
  printf("%d is larger than %d",num1,num2);

}
return 0;


}