#include "stdio.h"

int main(){
	int num, i, tam[32];
	scanf("%d",&num);
	for (i = 31; i>=0; i--){
		tam[i] = num % 2;
		num /= 2;
	} 
	for (i = 0; i<=31;i++){
		printf("%d",tam[i]);
	}
}
