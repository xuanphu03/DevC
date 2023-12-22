#include "stdio.h"

main() {
	int a = 2;
	int b = 3;
	if ((a = a + 1) == --b){
		printf("ngu");
		printf("%d %d", a, b);
		
	} else {
		printf("dot");
	}
}
