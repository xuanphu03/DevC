#include "stdio.h"

main(){
	int n, k, tam, sum;
	printf("Nhap n = ");
	scanf("%d", &n);
	tam = n;
	sum = 0;
	k = 0;
	while (tam != 0){
		sum += tam % 10;
		tam /= 10;
		k++;
	}
	printf("tb = %0.2f", (float)sum/k);
}
