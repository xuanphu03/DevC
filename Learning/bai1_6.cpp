#include "stdio.h"
#include "conio.h"

int main(){
	int num, test[31];
	printf("Nhap so nguyen he 10 = ");
	scanf("%d", &num);
	for (int i = 0; i < 32; i++){
		test[i] = num % 2;
		num /= 2;
	}
	for (int i = 31; i >= 0; i--){
		printf("%d", test[i]);
	}
}
