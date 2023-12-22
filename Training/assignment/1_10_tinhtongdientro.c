#include "stdio.h"
#include "math.h"

int main(){
	int r1,r2,r3; //R la cac dien tro
	float sum;
	printf("Nhap gia tri dien tro 1: "); scanf("%d",&r1);
	printf("\nNhap gia tri dien tro 2: "); scanf("%d",&r2);
	printf("\nNhap gia tri dien tro 3: "); scanf("%d",&r3);
	sum = pow(r1,-1) + pow(r2,-1) + pow(r3,-1);
	printf("Tong tro = %f", sum);
}
