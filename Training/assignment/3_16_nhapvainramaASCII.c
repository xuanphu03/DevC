#include "stdio.h"

int main(){
	char kytu;
	do{
		printf("Nhap 1 ky tu: ");
		fflush(stdin);
		scanf("%c", &kytu);
		printf("Ma ASCII cua ky tu %c la: %d\n", kytu, kytu);
	}while (kytu != '0');
}
