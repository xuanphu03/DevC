#include "stdio.h"
#include "math.h"

float s_hinhtron(float r){
	float s;
	s = 3.14*pow(r,2);
	return s;
}

float s_hinhthang(float a, float b, float h){
	float s;
	s = (float)(a + b)*h/2;
	return s;
}

float s_hcn(float a, float b){
	float s;
	s = a * b;
	return s;
}

int main(){
	float a, b, r;
	int chon;
	printf("Menu chon phep tinh dien tich\n\
	1. Dien tich hinh tron\n\
	2. Dien tich hinh thang\n\
	3. Dien tich hinh chu nhat\n\
	Hay chon muc ban can: ");
	scanf("%d", &chon);
	switch(chon){
		case 1:
			printf("Nhap ban kinh hinh tron r = ");
			scanf("%f", &r);
			printf("Dien tich hinh tron la %.2f", s_hinhtron(r));
			break;
		case 2:
			printf("Nhap day nho hinh thang a = ");
			scanf("%f", &a);
			printf("Nhap day lon hinh thang b = ");
			scanf("%f", &b);
			printf("Nhap chieu cao hinh thang h = ");
			scanf("%f", &r);
			printf("Dien tich hinh thang la %.2f", s_hinhthang(a,b,r));
			break;
		case 3:
			printf("Nhap chieu dai a = ");
			scanf("%f", &a);
			printf("Nhap chieu rong b = ");
			scanf("%f", &b);
			printf("Dien tich hinh chu nhat la %.2f", s_hcn(a,b));
			break;
	}
}
