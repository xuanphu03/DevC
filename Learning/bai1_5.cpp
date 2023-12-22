#include "stdio.h"
#include "conio.h"

int main(){
	int num, tram, chuc, donvi;
	printf("Nhap mot so co 3 chu so = ");
	scanf("%d", &num);
	donvi = num % 10;
	num /= 10;
	chuc = num % 10;
	tram = num / 10;
	printf("Chu so hang tram = %d", tram);
	printf("\nChu so hang chuc = %d", chuc);
	printf("\nChu so hang don vi = %d", donvi); 
}
