#include "stdio.h"
#include "math.h"

float Tinhtoan(float l){
	const float pi = 3.14;
	const float g = 9.8;
	return 2*pi*sqrt(l/g);
}

void NhapDl(float &l){
	printf("Nhap do dai cua day: ");
	scanf("%f", &l);
}

void XuatDl(float dt){
	printf("Chu ki cua con lac don la: T = %.2f", dt);
}

main(){
	float dodai;
	NhapDl(dodai);
	XuatDl(Tinhtoan(dodai));
}
