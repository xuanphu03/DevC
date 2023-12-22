#include "stdio.h"

int main(){
	int n;
	printf("Nhap so n = ");
	scanf("%d", &n);
	printf("Uoc cua %d la: ",n);
	for (int i = 1; i <= n/2; i++){
		if (n%i==0){
			printf("%d   ",i);
		}
	}
}
