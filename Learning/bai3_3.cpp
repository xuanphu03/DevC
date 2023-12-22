#include "stdio.h"

int main(){
	int n, sum;
	printf("Nhap so n = ");
	scanf("%d", &n);
	sum = n + 1;
	for (int i = 2; i <= n/2; i++){
		if (n % i == 0){
			sum += i;
		}
	}
	if (sum == '2*n'){
		printf("So %d la so hoan hao", n);
	}else{
		printf("So %d khong phai la so hoan hao", n);
	}
}                                                                  
