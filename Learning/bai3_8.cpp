#include "stdio.h"
#include "math.h"

int main(){
	int a, b, c, d;
	for (int i = 1; i < 10; i++){
		a = i;
		
		for (int j = 1; j < 10; j++){
			b = j;
			if (a == b) {
				continue;
			}
			for (int t = 1; t < 10; t++){
				c = t;
				if ((c == a) || (c == b)) continue;
				for (int z = 1; z < 10; z++){
					d = z;
					if ((d == a) || (d == b) || (d == c)) continue;
					if (a*pow(d,2) == b*pow(c,3)){
						printf("%d %d %d %d\n", a, b, c, d);
					}
				}
			}
  		}
	}
}

