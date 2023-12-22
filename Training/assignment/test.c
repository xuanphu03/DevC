#include "stdio.h"

main(){
	int n,i,j;
	float s, gt;
	printf("Nhap n = ");
	scanf("%d",&n);
	s = 0;
	for (i = 1; i <= n; i++){
		gt = 1;
		for (j = 2; j <= i; j++){
			gt = gt * j;
		}
		s = s + 1/gt;
	}
	printf("Tong s = %.2f", s);
}
