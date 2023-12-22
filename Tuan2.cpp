#include "stdio.h"

int Bai1(int num) {
	if (num) 
		return num + Bai1(num-1);
	else return 0;
}

int Bai2(int num) {
	if (num == 1) return 1;
	else if (num % 2 == 0) 
		return (-1)*num + Bai2(num - 1);
	else
		return num + Bai2(num - 1);
}

int Bai3(int num) {
	if (num == 1) return -1;
	else if (num % 2 == 0) 
		return num + (-1)*Bai2(num - 1);
	else
		return num + Bai2(num - 1);
}

float Bai4(float num) {
	if (num) 
		return 1/num + Bai4(num-1);
	else return 0;
}

float Bai5(int num) {
	if (num == 1) return 1;
	else if (num % 2 == 0) 
		return -1.0/num + Bai5(num - 1);
	else
		return 1.0/num + Bai5(num - 1);
}

float Bai6(int num) {
	if (num == 1) return -1;
	else if (num % 2 == 0) 
		return 1.0/num + Bai6(num - 1);
	else
		return -1.0/num + Bai6(num - 1);
}

int Bai7(int n){
	if(n==0) return 1;
	else if (n > 0)
		return n*Bai7(n-1);
}

float Bai8(float num) {
	if (num) 
		return 1/Bai7(num) + Bai8(num-1);
	else return 0;
}

float Bai9(int num) {
	if (num == 1) return 1;
	else if (num % 2 == 0) 
		return -1.0/Bai7(num) + Bai9(num - 1);
	else
		return 1.0/Bai7(num) + Bai9(num - 1);
}

float Bai10(int num) {
	if (num == 1) return -1;
	else if (num % 2 == 0) 
		return 1.0/Bai7(num) + Bai10(num - 1);
	else
		return -1.0/Bai7(num) + Bai10(num - 1);
}

main() {
	int n;
//	printf("Bai 1: Nhap n = "); scanf("%d", &n);
//	printf("=> %d\n", Bai1(n));
//	printf("Bai 2: Nhap n = "); scanf("%d", &n);
//	printf("=> %d\n", Bai2(n));
//	printf("Bai 3: Nhap n = "); scanf("%d", &n);
//	printf("=> %d\n", Bai3(n));
//	printf("Bai 4: Nhap n = "); scanf("%d", &n);
//	printf("=> %f\n", Bai4(n));
//	printf("Bai 5: Nhap n = "); scanf("%d", &n);
//	printf("=> %f\n", Bai5(n));
//	printf("Bai 6: Nhap n = "); scanf("%d", &n);
//	printf("=> %f\n", Bai6(n));
//	printf("Bai 7: Nhap n = "); scanf("%d", &n);
//	printf("=> %d\n", Bai7(n));
//	printf("Bai 8: Nhap n = "); scanf("%d", &n);
//	printf("=> %f\n", Bai7(n));
	printf("Bai 9: Nhap n = "); scanf("%d", &n);
	printf("=> %f\n", Bai9(n));
//	printf("Bai 10: Nhap n = "); scanf("%d", &n);
//	printf("=> %f\n", Bai7(n));
}
