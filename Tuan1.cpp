#include "stdio.h"
#include "math.h"

float DTHinhThang(float a, float b, float h) {
	float s;
	s = (a+b)*h/2;
	return s;
}

float DTHinhTron(float r) {
	const float PI = 3.14;
	float s;
	s = PI*r*r;
	return s;
}

float DTTamGiacDayChieuCao(float a, float b) {
	float s;
	s = a*b/2;
	return s;
}

float DTTamGiac3Canh(float a, float b, float c) {
	float s, p;
	p = (a + b + c)/2;
	s = sqrt(p*(p-a)*(p-b)*(p-c));
	return s;
}

float CVHinhTron(float r) {
	const float PI = 3.14;
	float s;
	s = PI*r*2;
	return s;
}

float ChuKiConLacDon(float l){
	const float g = 9.8;
	const float PI = 3.14;
	float T;
	T = 2*PI*sqrt(l/g);
	return T;
}

main() {
	float dayNho, dayLon, chieuCao;
	printf("Nhap day nho: ");
	scanf("%f", &dayNho);
	printf("Nhap day lon: ");
	scanf("%f", &dayLon);
	printf("Nhap chieu cao: ");
	scanf("%f", &chieuCao);
	printf("Dien tich hinh thang la: %f \n", DTHinhThang(dayNho, dayLon, chieuCao));
	
	float banKinh;
	printf("Nhap ban kinh: ");
	scanf("%f", &banKinh);
	printf("Dien tich hinh tron la: %f \n", DTHinhTron(banKinh));
	
	float canhDay, chieuCaoTG;
	printf("Nhap canh day: ");
	scanf("%f", &canhDay);
	printf("Nhap chieu cao: ");
	scanf("%f", &chieuCaoTG);
	printf("Dien tich hinh tam giac khi biet day va chieu cao: %f \n", DTTamGiacDayChieuCao(canhDay, chieuCaoTG));
	
	float canh1, canh2, canh3;
	printf("Nhap canh 1: ");
	scanf("%f", &canh1);
	printf("Nhap canh 2: ");
	scanf("%f", &canh2);
	printf("Nhap canh 3: ");
	scanf("%f", &canh3);
	printf("Dien tich tam giac khi biet 3 canh: %f \n", DTTamGiac3Canh(canh1, canh2, canh3));
	
	printf("Nhap ban kinh: ");
	scanf("%f", &banKinh);
	printf("Chu vi hinh tron la: %f \n", CVHinhTron(banKinh));
	
	float chieuDai;
	printf("Chieu dai con lac: ");
	scanf("%f", &chieuDai);
	printf("Chu ki con lac: %f", ChuKiConLacDon(chieuDai));
}
