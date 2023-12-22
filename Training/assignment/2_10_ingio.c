#include "stdio.h"

int main(){
	int gio, phut, giay, giaythem;
	printf("Nhap gio, phut, giay: ");
	scanf("%d%d%d", &gio, &phut, &giay);
	printf("Nhap so giay them: ");
	scanf("%d", &giaythem);
	giay += giaythem;
	while (giay >= 60){
		phut++;
		giay -= 60;
	}
	while (phut >= 60){
		gio++;
		phut -= 60;
	}
	if (gio >= 24){
		gio = 0;
	}
	printf("%02d:%02d:%02d",gio,phut,giay);
}
