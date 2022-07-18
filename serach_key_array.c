#include<stdio.h>
#include<stdlib.h>
int main()
{
  int a[100],i,limit,search_key;
  printf("Enter Array Limit : ");
  scanf("%d",&limit);
  printf("Enter Values:");
  for(i = 0; i<limit ;i++)
  {
    scanf("%d",&a[i]);
  }

  printf("ENter The Key to search :");
  scanf("%d",&search_key);
  for(i =0; i<limit; i++)
  { 
    if(search_key == a[i]){
      printf("Element Fround at Position %d",i+1);
      break;
    }
      
  }

  return 0;
}