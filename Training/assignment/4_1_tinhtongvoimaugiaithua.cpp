#include "stdio.h"
#include "math.h"

int giaithua(int n){
	int gt = 1;
	if (n == 1){
		return 1;
	}else if (n == 2){
		return 2;
	}else{
		for (int i = 2; i <= n; i++){
			gt *= i;
		}
		return gt;
	}
}

int main(){
	int n;
	float sum = 0;
	printf("Nhap n = ");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++){
		sum += 1.0/giaithua(i);
	}
	printf("S = %.2f", sum);
}
