#include "stdio.h"
#include "conio.h"

main(){
	int a, b;
	scanf("%d%d", &a, &b);
	printf("a + b = %d\n", a + b);
	printf("a - b = %d\n", a - b);
	printf("a * b = %d\n", a * b);
	printf("a / b = %0.2f\n", (float)a / b);
	printf("a %% b = %d", a % b);
	 
}
