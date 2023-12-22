#include "stdio.h"
#include "stdlib.h"
#include "time.h"
void Nhapdl(int a[], int *n){
	printf("Nhap n = ");
	scanf("%d", n);
	for (int i = 1; i <= *n; i++)
		a[i] = 1 + rand()%*n;
}
void Xuatdl(int a[], int n){
	for (int i = 1; i <= n; i++)
		printf("%d ", a[i]);
}
main(){
	int u[100], num;
	srand((int)time(0));
	Nhapdl(u, &num);
	Xuatdl(u, num);
}
	
