#include<stdio.h>
int main(){
	int a=7, sum=0;
	while(a<=777777){
	sum+=a;
	a=a*10+7;
}
printf("%d\n", sum);
return 0;
}
