#include "stdio.h"
#include "math.h"

int main(){
	float x;
	printf("Nhap gia tri cua x = ");
	scanf("%f", &x);
	//pow(x,y): ham tinh luy thua x mu y
	//exp(x): ham tinh e mu x
	//fabs(x): ham tinh gia tri tuyet doi x
	//sqrt(x): ham tinh can bac 2 cua x
	printf("\nCau a: y = %.2f", pow(x, 7)*exp(x)+3*x-8);
	printf("\nCau b: y = %.2f", (pow(x, x) + 9)/(5*x +7));
	printf("\nCau c: y = %.2f", fabs(5*x - 30)*(2*pow(x, 2) + 9));
	printf("\nCau d: y = %.2f", sqrt(7) + pow(x, 2));
	
}
