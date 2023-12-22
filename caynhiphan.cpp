#include<stdio.h>

struct TNode{
	int value;
	TNode *pLeft;
	TNode *pRight;
};

TNode *CreateNode(int d){
	TNode *node = new TNode;
	node -> value = d;
	node -> pLeft = NULL;
	node -> pRight = NULL;
	return node;
}

TNode *ChenNode(TNode *&root, int v){
	TNode *nodeChen = CreateNode(v);
	if(root == NULL){
		root = nodeChen;
	}
	else {
		TNode *pTmp = root;
		TNode *pParent = NULL;
		while(pTmp != NULL){
			pParent = pTmp;
			if(pTmp-> value > nodeChen -> value)
				pTmp = pTmp->pLeft;
			else
				pTmp = pTmp -> pRight;
		}
		if(pParent -> value > nodeChen -> value)
			pParent -> pLeft = nodeChen;
		else 
			pParent -> pRight = nodeChen;
	}
	return root;
}

void duyetTruoc(TNode *&root){
	if(root != NULL){
		printf("%d  ", root -> value);
		duyetTruoc(root -> pLeft);
		duyetTruoc(root -> pRight);
	}
}

void duyetSau(TNode *&root){
	if(root != NULL){
		duyetSau(root -> pLeft);
		duyetSau(root -> pRight);
		printf("%d  ", root->value);
	}
}

void duyetGiua(TNode *&root){
	if(root != NULL){
		duyetGiua(root->pLeft);
		printf("%d  ", root->value);
		duyetGiua(root -> pRight);
	}
}

TNode *TimKiem(TNode *&root, int data){
	if(root == NULL)
		return NULL;
	else{
		TNode *pTmp = root;
		while(pTmp != NULL && pTmp -> value != data){
			if(pTmp -> value > data)
				pTmp = pTmp -> pLeft;
			else
				pTmp = pTmp -> pRight;
		}
		if(pTmp != NULL)
			return pTmp;
		else
			return NULL;
	}
}

TNode *Nhap(TNode *tree, int &n) {
	TNode *p;
	for (int i=0; i<n; i++) {
		p = new TNode;
		printf("Nhap so thu %d: ", i+1);
		scanf("%d", &p->value);
		p->pLeft = NULL;
		p->pRight = NULL;
		tree = ChenNode(tree, p->value);
	}
	return tree;
}


main()
{	
	TNode *tree;
	int numb, x;
	
	printf("Nhap so luong phan tu: ");
	scanf("%d", &numb);
	tree = NULL;
	tree = Nhap(tree, numb);
	
	printf("Duyet giua ");
	duyetGiua(tree);
		printf("\n");
		printf("Duyet truoc ");
	duyetTruoc(tree);
		printf("\n");
		printf("Duyet sau ");
	duyetSau(tree);
	
	printf("\n");
	
	printf("Nhap so can tim: ");
	scanf("%d", &x);
	TNode *nodeTim = TimKiem(tree, x);
	if(!nodeTim)
		printf("Khong co %d trong cay", x);
	else
		printf("Co %d trong cay ", nodeTim -> value);
	
	
	
}
