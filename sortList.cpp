#include "stdio.h"

// 5,15,12,2,10,12, 9, 1, 9, 3, 2, 3

int viTriMin(int arr[], int i, int n) {
	int k = i;
	for (int index = i; index < n; index++)
		if (arr[k] > arr[index])
			k = index;
	return k;
}

void HOANVI(int &a, int &b) {
	int c = a;
	a = b;
	b = c;
}

void OUTPUT(int arr[], int &n) {
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
}

void INPUT(int arr[], int &n) {
	printf("Nhap so phan tu: ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		printf("Nhap so thu %d: ", i+1);
		scanf("%d", &arr[i]);
	}
}

void sxNoiBot(int arr[], int n) {
	for(int i = 0; i < n - 1; i++) {
		for(int j = n - 1; j > i; j--) {
			if (arr[j] < arr[j-1])
				HOANVI(arr[j], arr[j-1]);
		}
	}
}

void sxChon(int arr[], int n) {
	int vtMin;
	for (int i = 0; i < n; i++) {
		vtMin = viTriMin(arr, i, n);
		if (vtMin != i)
			HOANVI(arr[i], arr[vtMin]);
	}
}

void sxChen(int a[], int n){
    int min,z,vt;
    for(int i=0;i<n;i++){
        z=0;
        min=a[i];
        vt=i;
        for(int k=i+1;k<n;k++){           
            if (min>a[k]) {
                min=a[k];
                vt=k; 
                z=1;
                break;
            }
        }
        if (z==1){
            while ((min<a[vt-1])&&(vt>0)){
                    a[vt]=a[vt-1];
                    vt--;
                }
            a[vt]=min;
        }    
    }
}

main() {
	int list[100], listB[100], num, choose;
	INPUT(list, num);
	printf("\nMENU\n\
	1. Sap xep noi bot\n\
	2. Sap xep chon\n\
	3. Sap xep chen\n\
	Nhap so: ");
	scanf("%d", &choose);
	switch (choose) {
		case 1:
			sxNoiBot(list, num);
			printf("Noi bot: ");
			OUTPUT(list, num);
			break;
		case 2:
			sxChon(list, num);
			printf("Chon: ");
			OUTPUT(list, num);
			break;
		case 3:
			sxChen(list, num);
			printf("Chen: ");
			OUTPUT(list, num);
			break;
		case 4:	
			break;		
	}

	
}
