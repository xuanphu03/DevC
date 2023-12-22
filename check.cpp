#include "stdio.h"
#include "string.h"

struct CUAHANG {
	int soLuongTon;
	char matHang[50];
	CUAHANG *next;
};

CUAHANG *timKiem(CUAHANG *dau, char mh[]) {
	CUAHANG *tg;
	tg = dau;
	while (tg != NULL) {
		if (strcmp(tg->matHang, mh) == 0)
			return tg;
		tg = tg->next;
	}
	
	return NULL;
}

CUAHANG *themHang(CUAHANG *dau, CUAHANG *p) {
	CUAHANG *tg;
	if (dau == NULL)
		dau = p;
	else {
		p->next = dau;
		dau = p;
	}
	return dau;
}

CUAHANG *xoaHang(CUAHANG *dau, char mh[]) {
	CUAHANG *tg, *p;
	p = timKiem(dau, mh);
	if (p == dau) {
		dau = dau->next;
		p->next = NULL;
	} else {
		tg = dau;
		while (tg->next != p)
			tg = tg->next;
		tg->next = p->next;
		p->next = NULL;
	}
	return dau;
}

CUAHANG *nhapHang(CUAHANG *dau, int n) {
	CUAHANG *hang, *check;
	for (int i = 0; i < n; i++) {
		hang = new CUAHANG;
		printf("Nhap mat hang thu %d:\n", i+1);
		printf("Ten mat hang: ");
		fflush(stdin);
		gets(hang->matHang);
		do {
			printf("So luong: ");
			scanf("%d", &hang->soLuongTon);
			if (hang->soLuongTon < 0)
				printf("So luong khong duoc am!!!\n");
		} while (hang->soLuongTon < 0);
		hang->next = NULL;
		check = timKiem(dau, hang->matHang);
		if (check)
			check->soLuongTon += hang->soLuongTon;	
		else
			dau = themHang(dau, hang);
	}
	return dau;
}

CUAHANG *hienThiHang(CUAHANG *dau) {
	CUAHANG *tg;
	if (dau == NULL)
		printf("Khong co mat hang nao!!!");
	else {
		tg = dau;
		while (tg != NULL) {
			printf("%s ", tg->matHang);
			printf("%d\n", tg->soLuongTon);
			tg = tg->next;
		}
	}
	return dau;
}

CUAHANG *loaiBoHang(CUAHANG *dau) {
	CUAHANG *hang, *check;
	hang = new CUAHANG;
	printf("Nhap ten mat hang muon bo: ");
	fflush(stdin);
	gets(hang->matHang);
	return xoaHang(dau, hang->matHang);
}

CUAHANG *xuatHang(CUAHANG *dau) {
	CUAHANG *hang, *check;
	printf("Nhap mat hang can xuat:\n");
	hang = new CUAHANG;
	printf("Ten mat hang: ");
	fflush(stdin);
	gets(hang->matHang);
	do {
		printf("So luong: ");
		scanf("%d", &hang->soLuongTon);
		if (hang->soLuongTon < 0)
			printf("So luong khong duoc am!!!\n");
	} while (hang->soLuongTon < 0);
	hang->next = NULL;
	check = timKiem(dau, hang->matHang);
	if (check && hang->soLuongTon <= check->soLuongTon) {
		check->soLuongTon -= hang->soLuongTon;
		hienThiHang(dau);
	}
	else
		printf("Mat hang khong co hoac khong du so luong xuat\n");
	return dau;
}

CUAHANG *sapXep(CUAHANG *dau) {
	CUAHANG *tg, *tr, *tam;
	tg = dau;
	tam = new CUAHANG;
	strcpy(tam->matHang, "");
	tam->soLuongTon = 0;
	while (tg!=NULL) {
		tr = tg->next;
		while(tr != NULL){
			if (strcmp(tg->matHang, tr->matHang) > 0) {
				strcpy(tam->matHang, tg->matHang);
				tam->soLuongTon = tg->soLuongTon;
				strcpy(tg->matHang, tr->matHang);
				tg->soLuongTon = tr->soLuongTon;
				strcpy(tr->matHang, tam->matHang);
				tr->soLuongTon = tam->soLuongTon;
			}
			tr = tr->next;
		}
		tg = tg->next;
	}
	return dau;		
}

main() {
	CUAHANG *head, *p;
	int num, choose;
	head = NULL;
	printf("Nhap so luong mat hang hien co: ");
	scanf("%d", &num);
	head = nhapHang(head, num);
	head = hienThiHang(head);
//	head = xuatHang(head);
//	head = loaiBoHang(head);
	head = sapXep(head);
	head = hienThiHang(head);	
}

