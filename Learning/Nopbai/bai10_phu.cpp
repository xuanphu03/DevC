#include "stdio.h"

void Nhapdl(char &c){
	printf("Nhap ky tu: ");
	scanf("%c", &c);
}

void Xuatdl(char c){
	printf("%c -> %d", c, c);
}

main(){
	char kytu;
	Nhapdl(kytu);
	Xuatdl(kytu);
}
