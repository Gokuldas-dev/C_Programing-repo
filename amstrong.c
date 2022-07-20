#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
  int n=0,num,i,remainder =0,result;
    printf("enter a number");
    scanf("%d",&num);
    // n=num;
    while (num!=0)
    {
        num=num/10;
        n++;
    }
    while(num!=0)
    {
      
        remainder=num%10;
        result+=pow(remainder,n);
        num/=10;
        
    }
    if(result==num)
    {
        printf("It's a Armstrong number ");
    }
    else
    {
        printf("It's a not an Armstrong number ");
    }
    
return 0;
}