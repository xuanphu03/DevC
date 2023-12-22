#include "stdio.h"
/*vidu 123456789
De lay tung don vi trong so de in nguoc
k = 10
chia lay du so k -> ra duoc 9
k*10
chia du cho k -> 89 -> chia nguyen k/10 -> 8
k*10
chia du cho k -> 789 -> chia nguyen k/10 -> 7

*/
int main(){
	int n, k, t, i, len;
	printf("Nhap do dai cua so n: "); scanf("%d",&len);
	printf("Nhap so n = "); scanf("%d",&n);
	for (i = 1; i <= len; i++){
		t = n % 10;
		printf("%d", t);
		n /= 10;
		 
	}
	
}
