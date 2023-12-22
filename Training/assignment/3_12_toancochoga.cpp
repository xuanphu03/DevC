#include "stdio.h"

main(){
	int c,g;
	for (g = 1; g < 36; g++){
		for (c = 1; c < 25; c++){
			if((c+g==36) && (4*c+2*g==100)){
				printf("%d cho va %d ga", c,g);
			}
		}
	}
}
