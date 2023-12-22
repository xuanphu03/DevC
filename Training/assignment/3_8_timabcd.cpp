#include "stdio.h"

int main(){
	int a, b, c, d;
	for (a = 0; a <= 10; a++){
		for (b = 0; b <= 10; b++){
			if (a != b){
				for (c = 0; c <= 10; c++){
					if ((a != c) && (b != c)){
						for (d = 0; d <= 10; d++){
							if (d != a && d != b && d != c){
								if (a*d*d==b*c*c*c){
									printf("%d %d %d %d\n", a, b, c, d);
								}
							}
						}
					}
				}
			}
		}
	}
}
