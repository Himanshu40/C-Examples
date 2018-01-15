#include<stdio.h>
int main(){
	int a=1, num=0, sum=0;
	while(a<=9){
		num=num*10+a;
		sum=sum+num;
		a++;
	}
	printf("1+12+123.....+123456789:- %d\n", sum);
	return 0;
}
