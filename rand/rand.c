
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
  printf("I'll give you some random numbers.\n");
  srand((unsigned) time(NULL));

  int len;
  printf("How many do you want?: ");
  scanf("%d", &len);
  
  int min, max;
  printf("Min: ");
  scanf("%d", &min);
  printf("Max: ");
  scanf("%d", &max);

  printf("####################\n");
  printf("Settings\n");
  printf("Count: %d\n", len);
  printf("Min: %d\n", min);
  printf("Max: %d\n", max);
  printf("####################\n");
  
  int i;
  for (i=0; i<len; i++)
  {
    printf("%d\n", (rand() % max) +min);
  }
  
  return 0;
}
