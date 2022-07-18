#include<stdio.h>
int main()
{

int i, a[5];
printf("Enetr Values:");
for(i=0; i<5; i++)
{
  scanf("%d",&a[i]);

}
printf(" Values are: ");
for(i=0; i<5; i++)
{
  
  printf(" %d",a[i]);

}
return 0;
}