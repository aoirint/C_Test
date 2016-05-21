
#include<stdio.h>

int main(void)
{
  printf("May I have your name?\n");
  printf("Answer: ");
  
  char str[101];
  scanf("%s", str);
  
  printf("Thank you, %s.", str);
  
  return 0;
}
