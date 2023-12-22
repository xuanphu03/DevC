#include "stdio.h"

int main(){
	int khoangcach;
	printf("Nhap khoang cach di duoc: "); scanf("%d", &khoangcach);
	int tiencuoc, heso;
	if (khoangcach <= 30){
		tiencuoc = 12000 + (khoangcach - 1)*11000;
	}else{
		heso = khoangcach - 30;
		tiencuoc = 12000 + (khoangcach - heso - 1)*11000 + heso*9000;
	}
	printf("Tien cuoc TAXI la: %d", tiencuoc);
}
