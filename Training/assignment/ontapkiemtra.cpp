#include "stdio.h"
#include "math.h"

int main(){
	int i,n;
	float a, b, c, delta, x1, x2;
	printf("Nhap a = ");
	scanf("%f", &a);
	printf("Nhap b = ");
	scanf("%f", &b);
	printf("Nhap c = ");
	scanf("%f", &c);
	if (a == 0){
		if (b == 0){
			if (c == 0){
				printf("Phuong trinh vo so nghiem");
			}else{
				printf("Phuong trinh vo nghiem");
			}
		}else{
			printf("Phuong trinh co nghiem x = %.2f", -b/c);
		}
	}else{
		delta = b*b-4*a*c;
		if (delta < 0){
			printf("Phuong trinh vo nghiem");
		}else if(delta == 0){
			printf("Phuong trinh co nghiem kep x = %.2f", -b/(2*a));
		}else{
			x1 = (-b+sqrt(delta))/(2*a);
			x2 = (-b-sqrt(delta))/(2*a);
			printf("Phuong trinh co nghiem\nx1 = %.2f\nx2 = %.2f", x1, x2);
		}
	}
		
}
