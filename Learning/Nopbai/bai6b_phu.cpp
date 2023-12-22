#include "stdio.h"

int TimUCLN(int a, int b){
	int du;
	while(a % b != 0){
		du = a % b;
		a = b;
		b = du;
	}
	return b;
}

void Nhapdl(int &a, int &b){
	printf("Nhap 2 so: ");
	scanf("%d%d", &a, &b);
}

void Xuatdl(int n){
	printf("UCLN = %d", n);
}

main(){
	int num1, num2;
	Nhapdl(num1, num2);
	Xuatdl(TimUCLN(num1, num2));
}
