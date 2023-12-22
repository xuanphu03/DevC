#include "stdio.h"
#include "string.h"

struct HOCSINH{
	char Ten[100];
	int Lop;
	float Diem;
};
void Nhapds(HOCSINH a[], int *n){
	printf("Nhap n = ");
	scanf("%d", n);
	for (int i = 0; i < *n; i++){
		fflush(stdin);
		gets(a[i].Ten);
		scanf("%d", &a[i].Lop);
		scanf("%f", &a[i].Diem);
	}
}
void Hoanvi(HOCSINH *a, HOCSINH *b){
	HOCSINH tg;
	tg = *a;
	*a = *b;
	*b = tg;
}
void Sapxep(HOCSINH a[], int n){
	for (int i = 0; i < n-1; i++)
		for (int j = i+1; j < n; j++)
			if (a[i].Diem > a[j].Diem)
				Hoanvi(&a[i], &a[j]);
}
void Inds(HOCSINH a[], int n){
	for (int i = 0; i<n;i++){
		printf("\n%s", a[i].Ten);
		printf("\n%d", a[i].Lop);
		printf("\n%f", a[i].Diem);
	}
}
main(){
	HOCSINH ds[1000];
	int num;
	Nhapds(ds, &num);
	Sapxep(ds, num);
	Inds(ds, num);	
}
