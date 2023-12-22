#include "stdio.h"

int main(){
	int n, suma = 0, sumb = 0, gt = 1;
	float sumc = 0, sumd = 0;
	printf("Nhap so n = ");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++){
		if (i%2!=0){
			suma += i;
		}else{
			sumb += i;
		}
		sumc += 1.0/i;
		gt *= i;
		sumd += 1.0/gt;
	}
	printf("S1 = %d\nS2 = %d\nS3 = %f\nS4 = %f", suma, sumb, sumc, sumd);
}
