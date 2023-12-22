#include "stdio.h"
#include "math.h"

float Tinhnuachuvi(float a1, float a2, float a3){
	return (a1 + a2 + a3)/2;
}
float Tinhdientich(float a1, float a2, float a3){
	float p;
	p = Tinhnuachuvi(a1,a2,a3);
	return sqrt(p*(p-a1)*(p-a2)*(p-a3));	
}

void NhapDl(float &a1, float &a2, float &a3){
	printf("Nhap do dai 3 canh tam giac: ");
	scanf("%f%f%f", &a1, &a2, &a3);
}

void XuatDl(float dt){
	printf("Dien tich hinh tam giac S = %.2f", dt);
}

main(){
	float a, b, c;
	NhapDl(a, b, c);
	XuatDl(Tinhdientich(a, b, c));
} 
