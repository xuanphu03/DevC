#include "stdio.h"

int Kiemtrasochan(int num){
	if (num % 2 == 0)
		return 1;
	else
		return 0;
}

void Nhapdl(int &num){
	printf("Nhap n = ");
	scanf("%d", &num);
}

void Xuatdl(int num){
	if (Kiemtrasochan(num) == 1)
		printf("So chan");
	else
		printf("Khong phai so chan");
}

main(){
	int n;
	Nhapdl(n);
	Xuatdl(n);
}
