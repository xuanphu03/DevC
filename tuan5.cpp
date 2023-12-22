#include "stdio.h"

struct nodeList {
	int number;
	nodeList *node;
};

nodeList *SapXepTangDan(nodeList *head) {
	nodeList *tg, *tr;
	tg = head;
	int tam;
	while (tg!=NULL) {
		tr = tg->node;
		while(tr != NULL){
			if (tg->number > tr->number) {
				tam = tg->number;
				tg->number = tr->number;
				tr->number = tam;
			}
			tr = tr->node;
		}
		tg = tg->node;
	}
	return head;		
}

nodeList *boSung(nodeList *Dau, nodeList *ptu){
	if(Dau==NULL)
		Dau=ptu;
	else{
		ptu->node=Dau;
		Dau=ptu;
	}
	return Dau;
}

void ChenSo(nodeList *&head, nodeList *pt) {
	nodeList *tg = head;
	if (head->number >= pt->number) {
		pt->node = head;
		head = pt;		
	}

	else {
		while (tg->node != NULL && tg->node->number <= pt->number)
			tg = tg->node;
		pt->node = tg->node;
		tg->node = pt;
	}
}

nodeList *timKiem(nodeList *Dau, int x) {
	nodeList *tg;
	tg = Dau;
	while (tg != NULL) {
		if (tg->number == x)
			return tg;
		tg = tg->node;
	}
	return NULL;
}

nodeList*Xoa(nodeList *Dau, int x){
	nodeList *tg, *p;
	p = timKiem(Dau, x);
	if (p == Dau) {
		Dau = Dau->node;
		p->node = NULL;
	} else {	
		tg = Dau;	
		while(tg->node != p)	
				tg = tg->node;
			tg->node = p->node;
			p->node = NULL;				
		}
	return Dau;
}

int KiemTraPhanTu(nodeList *head, int k) {
	nodeList *tg = head;
	while (tg->node != NULL) {
		if(tg->number == k)
			return 1;
		else
			tg = tg->node;
	}
	return 0;
}

nodeList *Nhap(nodeList *head, int n) {
	head = NULL;
	nodeList *p;
	printf("Nhap so phan tu: ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		p = new nodeList;
		printf("Nhap so thu %d: ", i+1);
		scanf("%d", &p->number);
		p->node = NULL;
		if (head == NULL)
			head = p;
		else {
			nodeList *tg;
			tg = head;
			while (tg->node != NULL)
				tg = tg->node;
			tg->node = p;
		}
	}
	return head;
}

void IN(nodeList*head){
	nodeList*tg=head;
	if(head==NULL)
		printf("Day rong!");
	else{
		while(tg!=NULL){
			printf ("%d ",tg->number);
			tg=tg->node;
		}
	}
}

main() {
	nodeList *head;
	int num, k, choose, a;
	do {
		printf("\t---Menu----\n\
	1. Nhap day so\n\
	2. Tim kiem so trong day\n\
	3. Chen so vao day tang dan\n\
	4. Xoa so trong day\n\
	5. Sap xep theo thu tu tang dan\n\
	6. Thoat!\n\
	Chon: ");
		scanf("%d", &choose);
		switch (choose) {
			case 1: {
				head = Nhap(head,num);
				printf("Danh sach sau khi nhap:\n");
				IN(head);
				printf ("\n");
				break;
			}
			case 2: {
				printf("Nhap so can tim: ");
				scanf("%d", &k);
				if (KiemTraPhanTu(head, k))
					printf("So can tim co trong day\n");
				else
					printf("So can tim khong co trong day\n");
				break;
			}
				
			case 3: {
				printf("Nhap phan tu muon chen: ");
				scanf("%d", &a);
				nodeList *ptA = new nodeList;
				ptA->number = a;
				ChenSo(head, ptA);
				printf("Day so da chen: ");
				IN(head);
				printf ("\n");
				break;
			}
			
			case 4: {
				printf("Nhap so muon xoa: ");
				scanf("%d", &k);
  				head = Xoa(head, k);
				IN(head);
				printf ("\n");
				break;
			}
			

			case 5:	{
				SapXepTangDan(head);
				printf("Day so tang dan: \n");
				IN(head);
				printf ("\n");
				break;
			}
			
		}
	} while (choose != 6);
	
}
