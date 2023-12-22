#include "stdio.h"

int TimUCLN(int a, int b){
	while(a != b)
		if(a>b)
			a = a - b;
		else
			b = b - a;
	return a;
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
