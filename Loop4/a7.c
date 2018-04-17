#include <stdio.h>
int main(){
  int a, result=1, temp;
  printf("Enter any number:-\n");
  scanf("%d", &a);
  temp=a;
  for(;temp>0;temp--){
    result=result*temp;
  }
  printf("So the fatorial:-%d\n", result);
  return 0;
}
