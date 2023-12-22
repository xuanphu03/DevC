#include "stdio.h"
#include "math.h"

int main(){
	int num, count = 0;
	printf("Nhap so = ");
	scanf("%d",&num);
	float tb = 0;
	while (num != 0){
		count++;
		tb += num % 10;
		num /= 10;
	}
	tb = tb/count;
	printf("%.2f",tb);
}
