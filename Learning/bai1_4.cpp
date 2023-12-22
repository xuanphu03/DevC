#include "stdio.h"
#include "conio.h"

int main(){
	int max, a, b;
	printf("Nhap so nguyen a = "); scanf("%d", &a);
	printf("Nhap so nguyen b = "); scanf("%d", &b);
	max = a >= b ? a : b;
	printf("%d", max);
}
