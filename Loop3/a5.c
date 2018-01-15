#include <stdio.h>
int hcf(int a, int b){
	int c, gcd;
	for(c=1;c<=a&&c<=b;c++){
		if(a%c==0&&b%c==0)
			gcd=c;
	}
	return gcd;
}
int main()
{
    int n1, n2, result;
    printf("Enter two positive integers: ");
    scanf("%d %d",&n1,&n2);
    result=hcf(n1, n2);
    printf("GCD = %d\n", result);
    return 0;
}
