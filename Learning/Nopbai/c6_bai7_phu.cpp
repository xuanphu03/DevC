#include "stdio.h"
int i;
void Hoanvi(int *a, int *b){
	int tg;
	tg = *a;
	*a = *b;
	*b = tg;
}
void Hvminmax(int a[], int n){
	int min, max;
	min = 1;
	max = 1;
	for (i = 2; i <= n; i++){
		if (a[i] > a[max])
			max = i;
		if (a[i] < a[min])
			min = i;
	}
	Hoanvi(&a[min], &a[max]);
}
void Nhapdl(int a[], int *n){
	scanf("%d", n);
	for (i = 1; i <= *n; i++)
		scanf("%d", &a[i]);
}
void Indayso(int a[], int n){
	for (i = 1; i <= n; i++)
		printf("%d ", a[i]);
}
main(){
	int u[100], num;
	Nhapdl(u, &num);
	Indayso(u, num);
	Hvminmax(u, num);
	printf("\n");
	Indayso(u, num);
} 
