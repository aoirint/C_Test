
#include<stdio.h>

int main(void)
{
  printf("How old are you?\n");
  printf("Answer: ");
  
  int i;
  scanf("%d", &i);
  
  char c = (i == 1) ? '\0' : 's';
  
  printf("Oh, You are %d year%c old.", i, c);
  
  return 0;
}
