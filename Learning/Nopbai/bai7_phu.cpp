#include "stdio.h"

int UCLN(int a, int b){
	while (a != b)
		if(a>b)
			a = a - b;
		else
			b = b - a;
	return a; 
}

void Rutgon(int &t, int &m){
	int uc;
	uc = UCLN(t,m);
	t = t/uc;
	m = m/uc;	
}

void Nhapdl(int &t, int &m){
	printf("Nhap phan so: ");
	scanf("%d%d", &t, &m);
}

void Xuatdl(int t, int m){
	if(m==1)
		printf("Phan so da rut gon: %d", t);
	else
		printf("Phan so da rut gon: %d/%d", t,m);
}
main(){
	int tu, mau;
	Nhapdl(tu,mau);
	Rutgon(tu,mau);
	Xuatdl(tu,mau);
} 
