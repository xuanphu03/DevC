#include "stdio.h"

int main(){
	int i, n, fi, luutam1 = 0, luutam2 = 1;
	printf("Nhap do dai day Fibonaci = ");
	scanf("%d", &n);
	fi = luutam1 + luutam2;
	printf("%d ", fi);
	for(i = 1; i <= n; i++){
		printf("%d ", fi);
		luutam1 = luutam2;
		luutam2 = fi;
		fi = luutam1 + luutam2;
	}
}
