#include "stdio.h"

int main(){
	int suma = 0, sumb = 0, n,i,j;
	float sumc = 0, sumd = 0;
	printf("Nhap n = ");
	scanf("%d", &n);
	for (i=0; i<=n; i++){
		suma += 2*i+1;
		sumb += 2*i;
		if (i != 0){
			sumc += (float)1/i;
			int giaithua = 1;
			for (j = 2; j <= i; j++){
				giaithua *= j;
			}
			sumd += (float)1/giaithua;
		}
	}
	printf("%d\t%d\t%.2f\t%.2f", suma, sumb, sumc, sumd);
}
