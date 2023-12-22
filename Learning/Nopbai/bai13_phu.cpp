#include "stdio.h"

int Tinhtong(int n){
	int i, sum;
	sum = 0;
	for (i = 1; i <= n; i++)
		sum = sum + i;
	return sum;
}

void Nhapdl(int &n){
	printf("Nhap n = ");
	scanf("%d", &n);
}

void Xuatdl(int n){
	printf("Sum = %d", n);
}

main(){
	int num;
	Nhapdl(num);
	Xuatdl(Tinhtong(num));
}
