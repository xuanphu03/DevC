#include "stdio.h"

int main(){
	int a, b;
	char kytu;
	printf("Nhap hai so nguyen a va b: ");
	scanf("%d%d", &a, &b);
	fflush(stdin);
	printf("Nhap phep tinh ");
	scanf("%c", &kytu);
	switch (kytu){
		case '+':
			printf("a + b = %d", a + b);
			break;
		case '-':
			printf("a - b = %d", a - b);
			break;
		case '*':
			printf("a * b = %d", a * b);
			break;
		case '/':
			if (b != 0){
				printf("a / b = %.2f", (float)a / b);
			}
			else {
				printf("Khong chia duoc");
			}
			break;
	}
}
