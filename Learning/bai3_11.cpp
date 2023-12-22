#include "stdio.h"
#include "math.h"

int main(){
	int x, y, a, b, UCLN, BCNN;
	printf("Nhap so nguyen x = ");
	scanf("%d", &x);
	printf("Nhap so nguyen y = ");
	scanf("%d", &y);
	a = abs(x);
	b = abs(y);
	if(a != 0 && b != 0){
		while(a % b != 0){
			UCLN = a % b;
			a = b;
			b = UCLN;
		}
		UCLN = b;
		BCNN = abs(x*y)/UCLN;
	}else{
		if(a != 0){
			UCLN = a;
		}else if(b != 0){
			UCLN = b;
		}else {
			UCLN = 0;
			BCNN = 0; 
		}
	}
	printf("UOC CHUNG LON NHAT CUA %d VA %d la %d\n", x, y, UCLN);
	printf("BOI CHUNG NHO NHAT CUA %d VA %d la %d", x, y, BCNN);
}
