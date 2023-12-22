#include "stdio.h"

int main(){
	int a,b,c,d, max,min;
	printf("Nhap so a = ");
	scanf("%d", &a);
	printf("\nNhap so b = ");
	scanf("%d", &b);
	printf("\nNhap so c = ");
	scanf("%d", &c);
	printf("\nNhap so d = ");
	scanf("%d", &d);
	max = (a>=b?a:b) >= (c>=d?c:d) ? (a>=b?a:b) : (c>=d?c:d);
	min = (a<=b?a:b) <= (c<=d?c:d) ? (a<=b?a:b) : (c<=d?c:d);
	printf("\nSo lon nhat la: %d",max);
	printf("\nSo nho nha la: %d", min);
}
