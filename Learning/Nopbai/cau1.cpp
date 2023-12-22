#include "stdio.h"
#include "math.h"
void Hoanvi(int *a, int *b){
	int tg;
	tg = *a;
	*a = *b;
	*b = tg;
}
void Sapxeptang(int a[], int n){
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i] > a[j])
				Hoanvi(&a[i], &a[j]);
}
void ThayX(int a[], int n, int m, int *o){
	scanf("%d", o);
	for (int i = 0; i < n; i++)
		if (a[i] == m)
			a[i] = *o;
}
void NhapX(int *n){
	printf("\n");
	scanf("%d", n);
}
int Count(int a[], int n, int m){
	int c = 0;
	for (int i = 0; i < n; i++)
		if (a[i] == m)
			c++;
	return c;
}
int Tinhtong(int a[], int n){
	int sum = 0;
	for (int i = 0; i < n; i++)
		if (a[i] % 5 == 0)
			sum += a[i];
	return sum;
}
int Ktrangto(int n){
	if (n < 2)
		return 0;
	else 
		for (int i = 2; i <= sqrt((float)n); i++)
			if (n % i == 0)
				return 0;
	return 1;
}
void Nhapmang(int a[], int *n){
	scanf("%d", n);
	for (int i = 0; i < *n; i++)
		scanf("%d", &a[i]);
}
void Xuatngto(int a[], int n){
	for (int j = 0; j < n; j++)
		if (Ktrangto(a[j]) == 1)
			printf("%d ", a[j]);
	printf("\n%d ", Tinhtong(a, n));
}
void Xuatsopt(int a[], int n, int m){
	printf("\n%d", Count(a, n , m));
	printf(Count(a, n , m) > 0 ? "\nCo\n" : "\nKhong\n");
}
void Xuatmang(int a[], int n){
	for (int i = 0; i < n; i++)
		printf("%d ", a[i]);
}
int Ktrahh(int n){
	int test = n + 1;
	for (int i = 2; i <= n/2; i++)
		if (n % i == 0)
			test += i;
	return (test == 2*n ? 1 : 0);		
}
void Xuathh(int a[], int n){
	for (int i = 0; i < n; i++)
		if (Ktrahh(a[i])==1)
			printf("%d ", a[i]);
}
main(){
	int u[100], num, x, y;
	Nhapmang(u, &num);
	Xuatngto(u, num);
	NhapX(&x);
	Xuatsopt(u, num, x);
	ThayX(u, num, x, &y);
	Xuatmang(u, num);
	Sapxeptang(u, num);
	Xuatmang(u, num);
	Xuathh(u, num);
}
