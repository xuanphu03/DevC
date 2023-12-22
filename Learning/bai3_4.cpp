#include "stdio.h"

int main(){
	int n, test = 0;
	printf("Nhap so n = ");
	scanf("%d", &n);
	if (n < 5){
		if ((n == 2) || (n == 3)){
			printf("%d la so nguyen to",n);
		}
	}else{
		for (int i = 2; i <= n/2; i++){
			if (n % i == 0){
				printf("%d khong phai la so nguyen to", n);
				break;
			}else{
				test = 1;
			}
		}
		if(test == 1){
			printf("%d la so nguyen to", n);	
		}
	}
}
