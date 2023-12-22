#include "stdio.h"

int main(){
	for (int i = 1;i <= 10;i++){
		for(int j = 2; j < 10; j++){
			printf("%d * %2d = %02d	", j,i,j*i);
		}
		printf("\n");
	}
}
