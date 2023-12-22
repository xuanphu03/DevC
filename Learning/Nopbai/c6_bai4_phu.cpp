#include "stdio.h"
int i;
void Tinhtongchanle(int a[], int n, int *sc, int *sl){
	*sc = 0;
	*sl = 0;
	for (i = 1; i <= n; i++)
		if (a[i] % 2 == 0)
			*sc = *sc + a[i];
		else
			*sl = *sl + a[i];
}
void Demsochanle(int a[], int n, int *c, int *l){
	*c = 0;
	*l = 0;
	for (i = 1; i <= n; i++)
		if (a[i] % 2 == 0)
			*c = *c + 1;
		else
			*l = *l + 1;
}
void Nhapdl(int a[], int *n){
	printf("Nhap n = ");
	scanf("%d", n);
	for (i = 1; i <= *n; i++)
		scanf("%d", &a[i]);
}
void Xuatdl(int c, int l, int sc, int sl){
	printf("%d so chan, %d so le, Tong chan = %d, Tong le = %d", c, l, sc, sl);
}
main(){
	int u[100], n, c, l, sc, sl;
	Nhapdl(u, &n);
	Demsochanle(u, n, &c, &l);
	Tinhtongchanle(u, n, &sc, &sl);
	Xuatdl(c, l , sc, sl);	
}
