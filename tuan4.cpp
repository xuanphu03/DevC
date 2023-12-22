#include "stdio.h"

struct Diem {
	float toan;
	float ly;
	float hoa;
};

struct SinhVien {
	char hoTen[50];
	char ngaySinh[10];
	Diem diem;
	float diemTB;
	int gioiTinh;
};

float diemTrungBinh(Diem diem) {
	return (diem.toan + diem.hoa + diem.ly)/3;
}

void nhapSinhVien(SinhVien a[], int n) {
	for (int i = 0; i < n; i++) {
		printf("Nhap sv thu %d:\n", i+1);
		printf("Ho va ten: ");
		fflush(stdin);
		gets(a[i].hoTen);
		printf("Ngay sinh (dd/mm/yyyy): ");
		fflush(stdin);
		gets(a[i].ngaySinh);
		printf("Nhap diem sinh vien:\n");
		printf("Diem Toan: ");
		scanf("%f", &a[i].diem.toan);
		printf("Diem Ly: ");
		scanf("%f", &a[i].diem.ly);
		printf("Diem Hoa: ");
		scanf("%f", &a[i].diem.hoa);
		a[i].diemTB = diemTrungBinh(a[i].diem);
		printf("Nhap gioi tinh (1-Nam/0-Nu): ");
		fflush(stdin);
		scanf("%d", &a[i].gioiTinh);
	}
}



void xepLoai(SinhVien a) {
	if (diemTrungBinh(a.diem) >= 9)
		printf("||%-20s","Loai gioi"); 
	else if (diemTrungBinh(a.diem) >= 7)
		printf("||%-20s","Loai kha"); 
	else if (diemTrungBinh(a.diem) >= 5)
		printf("||%-20s","Loai trung binh"); 
	else
		printf("||%-20s","Loai yeu");
}

void sapXepSinhVien(SinhVien a[], int n) {
	SinhVien t;
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++)
			if (a[i].diemTB > a[j].diemTB) {
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
	}
}

//Them mot cai in tat ca thong tin cua sinh vien nua, bao gom diem 3 mon 

void inSinhVien(SinhVien a[], int n) {
	printf("||%-10s||%-20s||%-20s||%-20s||%-20s||%-20s\n","STT", "Ho ten", "Ngay sinh", "Gioi tinh", "Diem trung binh", "Xep loai");
	for (int i = 0; i < n; i++) {
		a[i].diemTB = diemTrungBinh(a[i].diem);
		printf("||%-10d", i+1);
		printf("||%-20s", a[i].hoTen);
		printf("||%-20s", a[i].ngaySinh);
		printf("||%s\n", (a[i].gioiTinh == 1 ? "Nam" : "Nu"));
		printf("||%-20.2f", a[i].diemTB);
		xepLoai(a[i]);
	}
}

main() {
	int n;
	printf("Nhap so sinh vien: ");
	scanf("%d", &n);
	SinhVien sinhvien[n];
	fflush(stdin);
	nhapSinhVien(sinhvien, n);
	inSinhVien(sinhvien, n);
	sapXepSinhVien(sinhvien, n);
	printf("Sap xep\n");
	inSinhVien(sinhvien, n);
}
