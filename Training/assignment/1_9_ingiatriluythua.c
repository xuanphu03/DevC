#include "stdio.h"
#include "math.h"

int main(){
	float a;
	printf("Nhap so a = ");
	scanf("%f", &a);
	printf("\nGia tri cua a binh phuong la: %.2f", pow(a,2));
	printf("\nGia tri cua a lap phuong la: %.2f", pow(a,3));
	printf("\nGia tri cua a mu bon la: %.2f", pow(a,4));
	
}
