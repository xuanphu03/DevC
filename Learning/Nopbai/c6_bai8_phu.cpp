#include "stdio.h"
int i, j;
void CongMT(int m1[][100], int m2[][100], int d, int c, int m[][100]){
	for (i = 1; i <= d; i++)
		for (j = 1; j <= c; j++)
			m[i][j] = m1[i][j] + m2[i][j];
}
void NhanMT(int m1[][100], int m2[][100], int d, int m[][100]){
	for (i = 1; i <= d; i++)
		for (j = 1; j <= d; j++){
			m[i][j] = 0;
			for(int k = 1; k <= d; k++)
				m[i][j] = m[i][j] + (m1[i][k] * m2[k][j]);
		}
			
}
void NhapHangCot(int *d, int *c){
	scanf("%d%d", d, c);
} 
void NhapMT(int m[][100], int d, int c){
	for (i = 1; i <= d; i++)
		for (j = 1; j <= c; j++)
			scanf("%d", &m[i][j]);
}
void Inmatran(int m[][100], int d, int c){
	printf("\n");
	for (i = 1; i <= d; i++){
		for (j = 1; j <= c; j++)
			printf("%3d ", m[i][j]);
		printf("\n");
	}
}
main(){
	int mt1[100][100], mt2[100][100], mt[100][100], dg, ct;
	NhapHangCot(&dg, &ct);
	NhapMT(mt1, dg, ct);
	NhapMT(mt2, dg, ct);
	Inmatran(mt1, dg, ct);
	Inmatran(mt2, dg, ct);
	CongMT(mt1, mt2, dg, ct, mt);
	Inmatran(mt, dg, ct);
	if (dg == ct){
		NhanMT(mt1, mt2, dg, mt);
		Inmatran(mt, dg, ct);
	}else
		printf("Khong the nhan ma tran");
} 
