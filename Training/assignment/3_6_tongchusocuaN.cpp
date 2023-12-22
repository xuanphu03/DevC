#include "stdio.h"

int main(){
	int num, tam, sum, dem;
	printf("Nhap so n = ");
	scanf("%d", &num);
	sum = 0;
	tam = num;
	dem = 0; 
	while (tam != 0){
		sum += tam % 10;
		tam = tam / 10;
		dem++;
	}
	printf("Tong cac chu so %d = %d\nSo luong chu so = %d", num, sum, dem);
}
