#include "stdio.h"
#include "math.h"

int main(){
	const float pi = 3.14;
	float dientich, thetich;
	int bankinh;
	printf("Nhap ban kinh cua hinh cau: R = ");
	scanf("%d", &bankinh);
	dientich = 4*pi*pow(bankinh,2);
	thetich = (4*pi*pow(bankinh,3))/3;
	printf("\nDien tich hinh cau la: %.2f", dientich);
	printf("\nThe tich hinh cau la: %.2f", thetich);
		
}
