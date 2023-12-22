#include "stdio.h"
#include "math.h"

int main(){
	int num;
	printf("Nhap so nguyen co 3 chu so: ");
	do {
	scanf("%d", &num);
	}
	while ((num/100>=10) || (num/10<=10));
	printf("Hang tram = %d", num/100);
	printf("\nHang chuc = %d", (num/10)%10);
	printf("\nHang don vi = %d", (num%10));
} 
