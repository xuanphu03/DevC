#include "stdio.h"

int giaithua(int n){
	int gt = 1;
	if (n == 1){
		return 1;
	}else if(n == 2){
		return 2;
	}else{
		for(int i = 2; i <= n; i++){
			gt *= i;
		}
		return gt;
	}
}

int main(){
	int n;
	printf("Nhap n = ");
	scanf("%d", &n);
	printf("%d", giaithua(n));
}
