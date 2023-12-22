#include "stdio.h"

int main(){
	int a, b, c, tam;
	for (int i = 100; i < 1000; i++){
		tam = i;
		c = tam % 10;
		tam = tam / 10;
		b = tam % 10;
		a = tam / 10;
		if (a+b+c==a*b*c){
			printf("%d %d %d\n", a, b, c);
		}
	}
}
