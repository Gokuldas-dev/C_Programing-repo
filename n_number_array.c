#include<stdio.h>
int main()
{
  int i, a[100],n;
  printf("Enter the size of array: ");
  scanf("%d",&n);
  printf("Enter Values:");
  for(i=0 ; i<n ; i++)
  {
    scanf("%d",&a[i]);
  }
  printf("PRinting it in reverse order:");

  for(i = n-1 ; i>=0 ; i--)
  {
    printf("%d",a[i]);
  }
  return 0;
}