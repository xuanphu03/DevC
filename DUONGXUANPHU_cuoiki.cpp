#include "stdio.h"
#include "string.h"

struct SINHVIEN {
	int maSv;
	char hoTen[200];
	char lop[10];
	float diemCk;
	int hanhKiem;
	SINHVIEN *next;
};

void HOANVI(SINHVIEN *sv1, SINHVIEN *sv2) {
	SINHVIEN *tam;
//Xem lai sap xep dang dinh issues
	tam->next = sv1->next;
	sv1->next = sv2->next;
	sv2->next = tam->next;	
}

char *handleChangeHK(int hk) {
	switch (hk) {
		case 1: return "Tot";
		case 2: return "Kha";
		case 3: return "Trung binh";
		case 4: return "Yeu";
		default: return "null";
	}
}

void heading() {
	printf("||%-20s||%-40s||%-20s||%-20s||%s\n", "Ma sinh vien", "Ho va ten", "Lop", "Diem cuoi ky", "Hanh kiem");
}

int checkString(char s1, char s2) {
	//Hoa == Hoa; hoa == Hoa; Hoa == hoa
	if ((s1 == s2) || (s1 == (s2 + 32)) || ((s1 + 32) == s2))
		return 1;
	return 0;
}

int handleCheckName(char string[], char name[]) {
	int lenString = strlen(string);
	int lenName = strlen(name);
	
	if (lenString == lenName && checkString(string[0], name[0])) {
		while (lenString) {
//		Kiem tra phan tu khong phan biet hoa thuong
			if (checkString(string[lenString], name[lenName])) {
				lenString--;
				lenName--;
			} else{
				return 0;	
			}
		}
	}
	else
	//	Kiem tra ten trong string tu sau len truoc den khi gap khoang trong
		while (string[lenString] != ' ') {
	//		Kiem tra phan tu khong phan biet hoa thuong
			if (checkString(string[lenString], name[lenName])) {
				lenString--;
				lenName--;
			} else{
				return 0;	
			}
	
		}
	return 1;
}

SINHVIEN *addSv(SINHVIEN *head, SINHVIEN *p) {
	SINHVIEN *tg;
	if (!head)
		head = p;
	else {
		tg = head;
		while (tg->next)
			tg = tg->next;
		tg->next = p;
	}
	return head;
}

SINHVIEN *INPUT(SINHVIEN *head, int n) {
	SINHVIEN *p;
	for (int i = 0; i < n; i++) {
		p = new SINHVIEN;
		printf("Nhap thong tin sinh vien thu %d\n", i+1);
		printf("Nhap ma sinh vien: ");
		scanf("%d", &p->maSv);
		fflush(stdin);
		printf("Nhap ten sinh vien: ");
		gets(p->hoTen);
		printf("Nhap lop: ");
		gets(p->lop);
		do {
			printf("Nhap diem: ");
			scanf("%f", &p->diemCk);
			if (p->diemCk > 10 || p->diemCk < 0)
				printf("Error: Diem tu 0->10\n");			
		} while(p->diemCk > 10 || p->diemCk < 0);

		do {
			printf("Nhap hanh kiem (1.Tot/2.Kha/3.TB/4Yeu: (Neu HK tot nhap so 1)): ");
			scanf("%d", &p->hanhKiem);
			if (p->hanhKiem > 4 || p->hanhKiem < 1)
				printf("Error: Hay nhap 1/2/3/4 theo mau tren!!!\n");
		} while(p->hanhKiem > 4 || p->hanhKiem < 1);
		p->next = NULL;
		head = addSv(head, p);
	}
	return head;
}

SINHVIEN *OUTPUT(SINHVIEN *head) {
	SINHVIEN *tg;
	if (!head) 
		printf("Khong co sinh vien nao!!!");
	else {
		tg = head;
		while (tg) {
			printf("||%-20d||%-40s||%-20s||%-20.2f||%s\n", tg->maSv, tg->hoTen, tg->lop, tg->diemCk, handleChangeHK(tg->hanhKiem));
			tg = tg->next;
		}
	}
	return head;
}

SINHVIEN *TIMKIEMSINHVIEN(SINHVIEN *head, char ten[]) {
	SINHVIEN *tg;
	int count = 0;
	if (!head) 
		printf("Khong co sinh vien nao!!!\n");
	else {
		tg = head;
		while (tg) {
			if (handleCheckName(tg->hoTen, ten)){
				count++;
				if (count == 1) heading();
				printf("||%-20d||%-40s||%-20s||%-20.2f||%s\n", tg->maSv, tg->hoTen, tg->lop, tg->diemCk, handleChangeHK(tg->hanhKiem));
			}
			tg = tg->next;
		}
		if (!count)
		printf("Khong co sinh vien ten %s\n", ten);
	}
	return head;
}

SINHVIEN *sapXepSinhVien(SINHVIEN *dau) {
	SINHVIEN *tg, *tr, *tam;
	tg = dau;
	tam = new SINHVIEN;
	
	while (tg!=NULL) {
		tr = tg->next;
		while(tr != NULL){
			if (strcmp(tg->hoTen, tr->hoTen) > 0) 
				HOANVI(tg, tr);
			tr = tr->next;
		}
		tg = tg->next;
	}
	return dau;		
}


main() {
	SINHVIEN *sinhvien;
	int soLuong, count, navigate;
	char name[20];
	sinhvien = NULL;

	do {
		printf("\nMenu\n\
		1. Nhap thong tin sinh vien\n\
		2. Liet ke man hinh danh sach tat ca nhung Sinh vien ten \"Hoa\"\n\
		3. Sap xep danh sach sinh vien theo ten sinh vien tang dan\n\
		4. Xoa phan tu cuoi khoi danh sach\n\
		5. Hien thi danh sach sau khi xoa ra man hinh\n\
		6. Liet ke danh sach theo ten can tim\n\
		0. Thoat!!!\n");
		printf("Nhap: ");
		scanf("%d", &navigate);
		
		switch (navigate) {
			case 1:{
				printf("Nhap so luong sinh vien can nhap: ");
				scanf("%d", &soLuong);
				sinhvien = INPUT(sinhvien, soLuong);
				printf("\nHien thi danh sach sinh vien\n");
				heading();
				OUTPUT(sinhvien);
				break;
			}
			
			case 2: {
				strcpy(name, "Hoa");
				sinhvien = TIMKIEMSINHVIEN(sinhvien, name);
				break;
			}
			
			case 3: {
				sinhvien = sapXepSinhVien(sinhvien);
				heading();
				OUTPUT(sinhvien);
				break;
			}
			
			case 6: {
				printf("\nNhap sinh vien can tim la: ");
				fflush(stdin);
				gets(name);
				sinhvien = TIMKIEMSINHVIEN(sinhvien, name);
				break;
			}
			
			default:
				printf("Ket thuc chuong trinh!!!");
		}
	} while(navigate);
	
}
