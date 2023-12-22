#include "stdio.h"
#include "math.h"

int main(){
	float temp;
	printf("Chon loai nhiet do \
	\n1. Fahrenheit sang Celsius.\
	\n2. Celsius sang Fahrenheit.\
	\nMoi ban nhap loai ban muon doi: ");
	int chon;
	float chuyendoi;
	scanf("%d",&chon);
	switch (chon){
		case 1:
			printf("Nhap nhiet do muon doi: ");
			scanf("%f", &temp);
			chuyendoi = (tepm - 32)/1.8;
			printf("\n%.2f do C", chuyendoi);
			break;
		case 2:
			printf("Nhap nhiet do muon doi: ");
			scanf("%f",&temp);
			chuyendoi = temp*1.8 + 32;
			printf("\n%.2f do F", chuyendoi);
			break;
		
		}
	
	
}
