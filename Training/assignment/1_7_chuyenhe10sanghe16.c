#include "stdio.h"

int main(){
	int num, i;
	int tam[32];
	scanf("%d",&num);
	for (i = 7; i>=0; i--){
		tam[i] = num % 16;
		num /= 16;
	} 
	for (i = 0; i<=7;i++){
		switch (tam[i]){
			case 10: 
				printf("A");
				break;
			case 11: 
				printf("B");
				break;
			case 12: 
				printf("C");
				break;
			case 13: 
				printf("D");
				break;
			case 14: 
				printf("E");
				break;
			case 15: 
				printf("F");
				break;
		default: printf("%d",tam[i]);
		}
	
}}
