#include "stdio.h"

float Tinhtoan(float bk){
	const float pi = 3.14;
	return bk*bk*pi;	
}

void NhapDl(float &bk){
	printf("Nhap ban kinh hinh tron: ");
	scanf("%f", &bk);
}

void XuatDl(float dt){
	printf("Dien tich hinh tron S = %.2f", dt);
}

main(){
	float bankinh;
	NhapDl(bankinh);
	XuatDl(Tinhtoan(bankinh));
}
