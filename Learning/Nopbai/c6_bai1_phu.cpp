#include "stdio.h"
int i;
int Max(int a[], int n){
	int m = a[1];
	for(i=2; i<=n;i++)
		if (m < a[i])
			m = a[i];
	return m;
}
void Nhapdl(int a[], int *n){
	printf("Nhap n = ");
	scanf("%d", n);
	for (i = 1; i <= *n; i++)
		scanf("%d", &a[i]);
}
void Xuatdl(int m){
	printf("So lon nhat: %d", m);
}
main(){
	int u[100], num;
	Nhapdl(u, &num);
	Xuatdl(Max(u, num));
}
