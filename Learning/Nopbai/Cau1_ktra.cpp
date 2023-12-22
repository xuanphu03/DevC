#include "stdio.h"
#include "math.h"
int i, j;
int Kiemtranguyento(int a){
	if (a < 2)    
        return 0;
    for (int i = 2; i <= a/2; i ++)
        if (a%i==0)
        	return 0;
    return 1;
}
int Tinhtong(int a[], int n){
	int sum = 0;
	for (i = 0; i < n; i++)
		if (a[i] % 5 == 0)
			sum += a[i];
	return sum;
}

void Nhapmang(int a[], int *n){
	printf("Nhap n = ");
	scanf("%d", n);
	for (i = 0; i < *n; i++){
		printf("Nhap so thu %d: ", i+1);
		scanf("%d", &a[i]);
	}
}
void Xuattong(int n){
	printf("Tong chia het cho 5: %d", n);
}
void Xuatmang(int a[], int n){
	for (i = 0; i < n; i++)
		printf("%d ", a[i]);
}
void Xuatnguyento(int a[], int n){
	for (i = 0; i < n; i++)
		if (Kiemtranguyento(a[i]) == 1)
			printf("%d ", a[i]);
}
main(){
	int m[100], num;
	Nhapmang(m, &num);
	Xuatmang(m, num);
	printf("\n");
	Xuatnguyento(m, num);
	printf("\n");
	Xuattong(Tinhtong(m,num));
}
