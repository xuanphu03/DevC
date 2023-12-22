#include "stdio.h"
#include "string.h"

struct DIEM{
	float Toan, Ly, Hoa;
};
struct HOCSINH{
	int Ma;
	char Hoten[100];
	DIEM Diemtb;
};
void Nhapds(HOCSINH a[], int *n){
	printf("Nhap n = ");
	scanf("%d", n);
	for (int i = 0; i<*n; i++){
		printf("Nhap ma sinh vien: ");
		scanf("%d", &a[i].Ma);
		printf("Nhap Ho va ten: ");
		fflush(stdin);
		gets(a[i].Hoten);
		printf("Nhap diem Toan, Ly, Hoa");
		scanf("%f%f%f", &a[i].Diemtb.Toan, &a[i].Diemtb.Ly, &a[i].Diemtb.Hoa);
	}
}
void Indstbtren5(HOCSINH a[], int n){
	int count = 0;
	for (int i = 0; i < n; i++){
		float tb = (a[i].Diemtb.Toan + a[i].Diemtb.Ly + a[i].Diemtb.Hoa)/3.0;
		count++;
		if (tb > 5){
			printf("\n%d", a[i].Ma);
			printf("\n%s", a[i].Hoten);
			printf("\n%.2f", tb);
		}
	}
	if (count == 0)
		printf("Khong co sinh vien nao co diem TB tren 5");
}
void Inds(HOCSINH a[], int n){
	for (int i = 0; i < n; i++){
		float tb = (a[i].Diemtb.Toan + a[i].Diemtb.Ly + a[i].Diemtb.Hoa)/3.0;
		printf("\n%d", a[i].Ma);
		printf("\n%s", a[i].Hoten);
		printf("\n%.2f", tb);
	}
}
main(){
	HOCSINH ds[100];
	int num;
	Nhapds(ds,&num);
	printf("Danh sach tb tren 5:\n");
	Indstbtren5(ds,num);
	printf("Danh sach sinh vien");
	Inds(ds,num);
}
