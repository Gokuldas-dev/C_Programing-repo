#include<stdio.h>
int main()
{

  int i,limit,a[100],j,temp;
  printf("Enter The Srray Size :");
  scanf("%d",&limit);
  printf("Enter the Elemets of Array :");
  for(i=0; i<limit; i++){
    scanf("%d",&a[i]);
  }

  printf("Sorted array is :");
  for(i =0; i<limit-1; i++)
  {
    for(int j = i+1; j<limit; j++)
    {
      if(a[i]>a[j])
      {
        temp = a[i];
        a[i] = a[j];
        a[j] = a[i];
      }
    }
  }

  for(i =0; i<limit; i++)
  {
    printf("%d\t",a[i]);
  }
  return 0;
}