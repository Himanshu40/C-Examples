#include<stdio.h>
int main(){
	int days, a=1, first;
	printf("enter the number of days: \n" );
	scanf("%i", &days);
	printf("Enter the first day\n" );
	scanf("%i", &first);
	printf("Sun\tMon\tTue\tWed\tThu\tFri\tSat\n");
	while (a<=days+first-1) {
		if(a-first+1>0)
			printf(" %i\t", a-first+1);
		else
			printf("\t");
		if(a%7==0) printf("\n");
		a++;
	}
	printf("\n");
	return 0;
}
