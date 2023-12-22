#include "stdio.h"
float Tinhtoan(float dl, float db, float dc){
	return (dl+db)*dc/2;
}
void Nhapdl(float *dl, float *db, float *dc){
	printf("Nhap day lon, day be, duong cao: ");
	scanf("%f%f%f", dl, db, dc);
}
void Xuatdl(float dt){
	printf("Dien tich hinh thang = %.2f", dt);
}
main(){
	float dayl, dayb, dcao;
	Nhapdl(&dayl, &dayb, &dcao);
	Xuatdl(Tinhtoan(dayl, dayb, dcao));
}
