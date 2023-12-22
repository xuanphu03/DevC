#include "stdio.h"
int i;
void Hoanvi(int *a, int *b){
	int tam;
	tam = *a;
	*a = *b;
	*b = tam;
}
void Sapxep(int a[], int n){
	if (n%1==0){
		for(int td = 1; td <= (n/2)-1; td++)
			for (int sd = td + 1; sd <= n/2; sd++)
				if(a[td]>a[sd])
					Hoanvi(&a[td], &a[sd]);
		for (int ts = (n/2)+1; ts <= n-1; ts++)
			for (int ss = ts+1; ss <= n; ss++)
				if(a[ts]<a[ss])
					Hoanvi(&a[ts], &a[ss]);
	}
	else{
		for(int td = 1; td <= n/2; td++)
			for (int sd = td + 1; sd <= n/2+1; sd++)
				if(a[td]>a[sd])
					Hoanvi(&a[td], &a[sd]);
		for (int ts = (n/2)+2; ts <= n-1; ts++)
			for (int ss = ts+1; ss <= n; ss++)
				if(a[ts]<a[ss])
					Hoanvi(&a[ts], &a[ss]);
	}
	
}
void Nhapdl(int a[], int *n){
	printf("Nhap n = ");
	scanf("%d", n);
	for (i = 1; i <= *n; i++)
		scanf("%d", &a[i]);
}
void Xuatdl(int a[], int n){
	for (i = 1; i <= n; i++)
		printf("%d ", a[i]);
}
main(){
	int u[100], num;
	Nhapdl(u, &num);
	Sapxep(u, num);
	Xuatdl(u, num);
}
