#include "stdio.h"
int i, j;
int Tongdc(int a[][100], int n){
	int sum = 0;
	for (i = 1; i <= n; i++)
		sum = sum + a[i][i];
	return sum;
}
void Nhapmt(int a[][100], int *n){
	printf("Nhap cap cua ma tran: ");
	scanf("%d", n);
	for (i = 1; i <= *n; i++)
		for (j = 1; j <= *n; j++)
			scanf("%d", &a[i][j]);
}
void Inra(int a[][100], int n, int sum){
	for (i = 1; i <= n; i++){
		for (j = 1; j <= n; j++)
			printf("%4d ", a[i][j]);
		printf("\n");
	}
	printf("Tong duong cheo: %d", sum);
}
main(){
	int mt[100][100], m;
	Nhapmt(mt, &m);
	Inra(mt, m, Tongdc(mt, m));
}
