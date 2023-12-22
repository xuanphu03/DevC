#include "stdio.h"
/*So nguyen to: 2, 3, 5,...
la so chi chia het cho 1 va chinh no
*/
main(){
	int n, i;
	printf("Nhap so nguyen n = ");
	scanf("%d", &n);
	if (n < 2){
		printf("Khong phai la so nguyen to");
	}else if (n == 2 || n == 3){
		printf("La so nguyen to");
	}else{
		for (i = 2; i <= n/2; i++){
			if (n % i == 0){
				printf("Khong phai la so nguyen to");
				i = 0;
				break;
			}
		}
	if (i != 0){
		printf("La so nguyen to");
	}	
	}
}
