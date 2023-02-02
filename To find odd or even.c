#include <stdio.h>
void main()
{

  char a ;
  printf("Enter the number to be find even or odd");
  scanf("%d",&a);

  if (a % 2 == 0)
  {
    printf("The number %d is even",a);
  }
  else 
  {
    printf("The number %d is odd ",a);
  }
}