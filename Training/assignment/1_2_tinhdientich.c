#include "stdio.h"
#include "math.h"

int main(){
	int a, b, h, r;
	const float pi = 3.14;
	printf("Nhap a va b: ");
	scanf("%d%d", &a, &b);
	printf("\nDien tich hinh chu nhat = %d", a * b);
	printf("\nNhap chieu cao h: ");
	scanf("%d", &h);
	printf("\nDien tich hinh thang = %.2f", (float) ((a + b) * h) / 2);
	printf("\nNhap ban kinh r: ");
	scanf("%d", &r);
	printf("\nDien tich hinh tron = %.2f", pi * r *r);
	
}

