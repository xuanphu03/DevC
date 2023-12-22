#include "stdio.h"
int i, j;
void Hoanvi(int *a, int *b){
	int tg;
	tg = *a;
	*a = *b;
	*b = tg;
}
void Sapxep(int a[][100], int d, int c){
	for (i = 1; i <= d; i++)
		for (j = 1; j < c; j++)
			for (int k = j + 1; k <= c; k++)
				if (a[i][j] > a[i][k])
					Hoanvi(&a[i][j], &a[i][k]);
}
void Nhapmt(int a[][100], int *d, int *c){
	scanf("%d%d", d, c);
	for (i = 1; i <= *d; i++)
		for (j = 1; j <= *c; j++)
			scanf("%d", &a[i][j]);
}
void Inra(int a[][100], int d, int c){
	for (i = 1; i <= d; i++){
		for (j = 1; j <= c; j++)
			printf("%4d ", a[i][j]);
		printf("\n");
	}
}
main(){
	int mt[100][100], m, n;
	Nhapmt(mt, &m, &n);
	Inra(mt, m, n);
	Sapxep(mt, m, n);
	printf("\n");
	Inra(mt, m, n);
}
