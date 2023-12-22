#include "stdio.h"

int Tinhtoan(int n){
	int sum, tam;
	sum = 0;
	while(n != 0){
		tam = n % 10;
		sum = sum + tam;
		n = n / 10;
	}	
	return sum;
}

void Nhapdl(int &n){
	printf("Nhap so n = ");
	scanf("%d", &n);
}

void Xuatdl(int n){
	printf("S = %d", n);
}

main(){
	int num;
	Nhapdl(num);
	Xuatdl(Tinhtoan(num));
}
