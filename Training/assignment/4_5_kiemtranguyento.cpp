#include "stdio.h"

int kiemtranguyento(int n){
	if (n <= 4){
		if ((n == 1) || (n == 2) || (n == 3)){
			return 1;
		}else{
			return 0;
		}
	}else{
		for (int i = 2; i < n/2; i++){
			if (n % i == 0){
				return 0;
			}
		}return 1;
	}
}

int main(){
	for (int i = 1; i < 1000; i++){
		if (kiemtranguyento(i) == 1){
			printf("%d ", i);
		}
	}
}
