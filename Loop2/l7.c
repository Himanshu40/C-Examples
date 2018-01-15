#include<stdio.h>
#include<math.h>
int main(){
  int a, sum=0;
  for(a=1;a<=15;a++)
    sum+=pow(a,2);
  printf("%d\n", sum);
  return 0;
}
