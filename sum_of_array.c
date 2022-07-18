#include<stdio.h>
int main()
{
  int a[100],limit,i,sum = 0;
  printf("Enter array Limit :");
  scanf("%d",&limit);
  printf("Enter Values : ");

  for(i=0; i<limit; i++)
  {
    scanf("%d",&a[i]);
  }

  for(i =0 ; i<limit ; i++)
  {
    sum = sum + a[i];
  }

  printf("Sum is :%d",sum);

  return 0;
}