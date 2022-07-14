#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{

  char c;
  printf("enter a character : ");
  scanf("%c",&c);
  printf("ASCII Value of %c = %d",c,c);
  // %c take the character
  // %d makes it as a digit of that characher
  return 0;
}