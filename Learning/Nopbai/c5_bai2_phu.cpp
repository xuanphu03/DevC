#include "stdio.h"
int UCLN(int a, int b){
	while (a!=b)
		if (a>b)
			a = a - b;
		else
			b = b -a;
	return a;
}
void Rutgon(int *t, int *m){
	int uc = UCLN(*t, *m);
	*t = *t / uc;
	*m = *m / uc;
}
void Congps(int t1, int m1, int t2, int m2, int *t, int *m){
	*t = t1*m2+t2*m1;
	*m = m1*m2;
	Rutgon(t, m);
}
void Nhapdl(int *t1, int *m1, int *t2, int *m2){
	printf("Nhap ps thu 1: ");
	scanf("%d%d", t1, m1);
	printf("Nhap ps thu 2: ");
	scanf("%d%d", t2, m2);
}
void Xuatdl(int t, int m){
	printf("Tong 2 ps: %d/%d", t, m);
}
main(){
	int tu1, mau1, tu2, mau2, tu, mau;
	Nhapdl(&tu1, &mau1, &tu2, &mau2);
	Congps(tu1, mau1, tu2, mau2, &tu, &mau);
	Xuatdl(tu, mau);
}

