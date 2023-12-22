#include "stdio.h"

int main(){
	int i, j, n;
	printf("Nhap so nguyen duong n = ");
	scanf("%d", &n);
	int tonguoc = n;
	for (i = 1; i <= n/2; i++){
		if (n % i == 0){
			tonguoc += i;
		}
	}
	if (2*n == tonguoc){
		printf("%d la so hoan hao",n);
	}else{
		printf("%d khong phai so hoan hao",n);
	}
	
} 
