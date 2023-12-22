#include "stdio.h"

struct NODE {
	int data;
	NODE *next;
};

NODE *BSUNG_Sau(NODE *Dau, NODE *ptu) {
	if (Dau == NULL)
		Dau = ptu;
	else
	{
		ptu->next =Dau;
		Dau = ptu;
	}	
	return Dau;	
}

NODE *BSUNG_Dau(NODE *Dau, NODE *ptu) {
	NODE *tg;
	if (Dau == NULL)
		Dau = ptu;
	else
	{	
		tg = Dau;
		while (tg->next != NULL)
			tg = tg->next;
		tg->next = ptu;
	}	
	return Dau;	
}

NODE *timKiem(NODE *Dau, int x) {
	NODE *tg;
	tg = Dau;
	while (tg != NULL) {
		if (tg->data == x)
			return tg;
		tg = tg->next;
	}
	return NULL;
}

NODE *SapXepTangDan(NODE *head) {
	NODE *tg, *tr;
	tg = head;
	int tam;
	while (tg!=NULL) {
		tr = tg->next;
		while(tr != NULL){
			if (tg->data > tr->data) {
				tam = tg->data;
				tg->data = tr->data;
				tr->data = tam;
			}
			tr = tr->next;
		}
		tg = tg->next;
	}
	return head;		
}

NODE *DsLIFO(NODE *head, int n) {
	NODE *p;
	for (int i = 0; i < n; i++) {
		p = new NODE;
		printf("Nhap so thu %d: ", i+1);
		scanf("%d", &p->data);
		p->next =NULL;
		head = BSUNG_Sau(head, p);
	}
	return head;
}

NODE *DsFIFO(NODE *head, int n) {
	NODE *p;
	for (int i = 0; i < n; i++) {
		p = new NODE;
		printf("Nhap so thu %d: ", i+1);
		scanf("%d", &p->data);
		p->next =NULL;
		head = BSUNG_Dau(head, p);
	}
	return head;
}

NODE *GhepDS(NODE *h1, NODE *h2) {
	NODE *tg;
	tg = h1;
	while (tg->next != NULL)
		tg = tg->next; 
	tg->next = h2;
	return h1;
}

void IN_DSLK(NODE * Dau) {
	NODE *tg;
	tg = Dau;
	while (tg!=NULL)
	{
		printf("%d ", tg->data);
		tg = tg->next;
	}
}

main() {
	int n, p;
	NODE *head1 = NULL;
	NODE *head2 = NULL;
	NODE *head;
	printf("Nhap n1 = ");
	scanf("%d", &n);
	printf("Nhap day FIFO\n");
	head1 = DsFIFO(head1, n);
	IN_DSLK(head1);
	printf("\nNhap n2 = ");
	scanf("%d", &n);
	printf("Nhap day LIFO\n");
	head2 = DsLIFO(head2, n);
	IN_DSLK(head2);
	printf("\nDay tang dan FIFO\n");
	head1 = SapXepTangDan(head1);
	IN_DSLK(head1);
	printf("\nDay tang dan LIFO\n");
	head2 = SapXepTangDan(head2);
	IN_DSLK(head2);
	printf("\nNhap so can tim: ");
	scanf("%d", &p);
	if (timKiem(head1, p))
		printf("%d co trong day FIFO\n", p);
	else
		printf("%d khong co trong day FIFO\n", p);
	if (timKiem(head2, p))
		printf("%d co trong day LIFO\n", p);
	else
		printf("%d khong co trong day LIFO\n", p);
	head = GhepDS(head1, head2);
	head = SapXepTangDan(head);
	printf("Day duoc ghep tu 2 danh sach\n");
	IN_DSLK(head);
}
