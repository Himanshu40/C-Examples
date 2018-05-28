#include<stdio.h>
#include<stdlib.h>
int main()
{
  int num, *p;
  printf("Enter the size:-\n");
  scanf("%d", &num);
  p = (int *)malloc(num*sizeof(int));
  int i;
  for(i=0;i<num;i++)
  {
    printf("Enter the numbers:-\n");
    scanf("%d", &p[i]);
  }
  printf("The numbers are as follows:-\n");
  for(i=0;i<num;i++)
    printf("%d\n", p[i]);
  free(p);
  return 0;
}
