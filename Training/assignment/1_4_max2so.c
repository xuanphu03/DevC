#include "stdio.h"
#include "math.h"

int main(){
	int a, b, max;
	printf("Nhap hai so a va b: ");
	scanf("%d%d",&a,&b);
	max=a>=b?a:b;
	printf("\n%d", max);
}
