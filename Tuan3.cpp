#include "stdio.h"

int tinhTongAm(int arr[], int n) {
	int total = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] < 0) 
			total += arr[i];
	}
	return total;
}

int tinhTongDuong(int arr[], int n) {
	int total = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] > 0) 
			total += arr[i];
	}
	return total;
}

int tinhTongChiaHet5(int arr[], int n) {
	int total = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] % 5 == 0) 
			total += arr[i];
	}
	return total;
}

int timMax(int arr[], int n) {
	int max = arr[0];
	for (int i = 0; i < n; i++) {
		if (arr[i] > max) 
			max = arr[i];
	}
	return max;
}

int timMin(int arr[], int n) {
	int min = arr[0];
	for (int i = 0; i < n; i++) {
		if (arr[i] < min) 
			min = arr[i];
	}
	return min;
}

int timChanMax(int arr[], int n) {
	int max = arr[0];
	for (int i = 0; i < n; i++) {
		if ((arr[i] > max) && (arr[i] % 2 == 0)) 
			max = arr[i];
	}
	if (max % 2 == 0)
		return max;
	else return 0;
}

int timLeMin(int arr[], int n) {
	int min = arr[0];
	for (int i = 0; i < n; i++) {
		if ((arr[i] < min) && (arr[i] % 2 != 0))
			min = arr[i];
	}
	if (min % 2 != 0)
		return min;
	else return 0;
}

void nhapMang(int arr[], int &n) {
	printf("Nhap n = ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		printf("So thu %d: ", i+1);
		scanf("%d", &arr[i]);
		
	}
}

void xuatTongAm(int arr[], int n) {
	int total = tinhTongAm(arr, n);
	printf("Tong am: %d\n", total);
}

void xuatTongDuong(int arr[], int n) {
	int total = tinhTongDuong(arr, n);
	printf("Tong duong: %d\n", total);
}

void xuatTongChiaHet5(int arr[], int n) {
	int total = tinhTongChiaHet5(arr, n);
	printf("Tong chia het 5: %d\n", total);
}

void xuatMax(int arr[], int n) {
	printf("Xuat max: %d\n", timMax(arr, n));
}

void xuatMin(int arr[], int n) {
	printf("Xuat min: %d\n", timMin(arr, n));
}

void xuatChanMax(int arr[], int n) {
	printf("Xuat max: %d\n", timChanMax(arr, n));
}

void xuatLeMin(int arr[], int n) {
	printf("Xuat min: %d\n", timLeMin(arr, n));
}


main(){
	int mang[1000];
	int n;
	nhapMang(mang, n);
	xuatTongAm(mang, n);
	xuatTongDuong(mang, n);
	xuatTongChiaHet5(mang, n);
	xuatMax(mang, n);
	xuatMin(mang, n);
	xuatChanMax(mang, n);
	xuatLeMin(mang, n);
	
}

