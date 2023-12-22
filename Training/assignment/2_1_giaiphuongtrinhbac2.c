#include "stdio.h"
#include "math.h"


int main(){
	int a, b, c, delta; //a, b, c la ba he so cua phuong trinh
	float x1, x2;
	printf("Nhap so a = ");
	scanf("%d", &a);
	printf("Nhap so b = ");
	scanf("%d", &b);
	printf("Nhap so c = ");
	scanf("%d", &c);
	if (a==0){
		if (b==0){
			if (c==0){
				printf("Phuong trinh vo so nghiem");
			}else{
				printf("Phuong trinh vo nghiem");
			}
		}else{
			x1 = (float)-c/b;
			printf("Phuong trinh co 1 nghiem x = %0.2f", x1);
		}
	}else{
		delta = pow(b,2)-4*a*c;
		if (delta>0){
			x1 = (-b + sqrt(delta))/(2*a);
			x2 = (-b - sqrt(delta))/(2*a);
			printf("Phuong trinh co 2 nghiem phan biet\
			\nx1 = %.2f\
			\nx2 = %.2f", x1, x2);
		}else if (delta == 0){
			x1 = -b/(2*a);
			printf("Phuong trinh co 1 nghiem kep x = %.2f", x1);
		}else printf("Phuong trinh vo nghiem");
	}
}
