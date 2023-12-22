#include "stdio.h"
#include "math.h"

int UCLN(int a, int b){
	if (a * b == 0){
		if ((a == 0) && (b != 0)){
			return b;
		}if ((a != 0) && (b == 0)){
			return a;
		}else return 0;
	}else{
		while(a != b){
			if(a > b){
				a -= b;
			}else{
				b -= a;
			}
		}
		return a;
	}
}

int BCNN(int a, int b){
	if (a * b == 0){
		return 0;
	}else{
		return fabs(a*b)/UCLN(a,b);
	}
}

int main(){
	int a,b;
	printf("Nhap so a = ");
	scanf("%d", &a);
	printf("Nhap so b = ");
	scanf("%d", &b);
	printf("Uoc chung lon nhat cua %d va %d la %d\n", a, b, UCLN(a,b));
	printf("Boi chung nho nhat cua %d va %d la %d", a, b, BCNN(a,b));
}
