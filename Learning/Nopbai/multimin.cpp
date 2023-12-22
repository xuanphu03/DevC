#include "stdio.h"

int MultiMin(int x, int a[]){
	int min1 = a[0], min2 = a[1];
	if (min1 <= min2)
		for (int i = 2; i < x; i++)
			if (min1 > a[i]){
				min2 = min1;
				min1 = a[i];
			}
	else{
		for (int i = 2; i < x; i++)
			if (min2 > a[i]){
				min1 = min2;
				min2 = a[i];
			}
	}
	return min1*min2;
}
void Input(int &x, int a[]){
	scanf("%d", &x);
	for (int i=0; i<x; i++)
		scanf("%d", &a[i]);
}

void Output(int x){
	printf("%d", x);
}

main(){
	int num, arr[10000];
	Input(num, arr);
	Output(MultiMin(num, arr));
}
