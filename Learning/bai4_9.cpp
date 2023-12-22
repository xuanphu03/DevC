#include "stdio.h"
#include "math.h"

int main(){
	int a, b, c, test;
	for (int i = 100; i < 999; i++){
		a = i / 100;
		test = i % 100;
		b = test / 10;
		c = test % 10;
		if (a+b+c == a*b*c){
			printf("%d %d %d\n", a, b, c);
		}
	}
}
