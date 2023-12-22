#include "stdio.h"

int main(){
	int a, b, c, d, x, y;
	printf("Nhap so nguyen a = "); scanf("%d", &a);
	printf("Nhap so nguyen b = "); scanf("%d", &b);
	printf("Nhap so nguyen c = "); scanf("%d", &c);
	printf("Nhap so nguyen d = "); scanf("%d", &d);
	if (a >= b){
		x = a;
	}else x = b;
	if (c >= d){
		y = c;
	}else y = d;
	if (x >= y){
		printf("So lon nhat: %d",x);
	}else printf("So lon nhat: %d", y);
}
