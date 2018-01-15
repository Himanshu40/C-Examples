#include<stdio.h>
int main(){
	int a=7, sum=0;
	while(a<=700000){
		sum+=a;
		a*=10;
}
printf("%d\n", sum);
return 0;
}
