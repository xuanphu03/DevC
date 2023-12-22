#include "stdio.h"

char Doidiemchu(float d){
	if(d >= 8.5)
		return 'A';
	else if(d >= 7)
		return 'B';
	else if(d >= 5.5)
		return 'C';
	else if(d >= 4)
		return 'D';
	else
		return 'F';
}
void Nhapdl(float &d){
	printf("Nhap diem: ");
	scanf("%f", &d);
}

void Xuatdl(char d){
	printf("Diem chu: %c", d);
}

main(){
	float diem;	
	Nhapdl(diem);
	Xuatdl(Doidiemchu(diem));
}
