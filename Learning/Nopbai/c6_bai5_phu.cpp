#include "stdio.h"
int i;
int Max(int a[], int n){
	int m = a[1];
	for(i = 2; i <= n; i++)
		if (m < a[i])
			m = a[i];
	return m;
}
int Min(int a[], int n){
	int m = a[1];
	for (i = 2; i <= n; i++)
		if (m > a[i])
			m = a[i];
	return m;
}
void Nhapdl(int a[], int *n){
	scanf("%d", n);
	for (i = 1; i <= *n; i++)
		scanf("%d", &a[i]);
}
void Xuatdl(int mx, int mn){
	printf("So lon nhat %d, so nho nhat %d", mx, mn);
}
main(){
	int u[1000], n;
	Nhapdl(u, &n);
	Xuatdl(Max(u, n), Min(u, n));
}
