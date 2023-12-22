#include "stdio.h"
#include "math.h"

int main(){
	int a, b, c;
	printf("Nhap 3 canh cua tam giac: "); scanf("%d%d%d", &a, &b, &c);
	if ((a+b>c) && (a+c>b) && (b+c>a)){
		if ((a==b) || (b==c) || (a==c)){
			printf("Tam giac can");
		}else if ((a==b) && (a==c)){
			printf("Tam giac deu");
		}else if ((pow(a,2)+pow(b,2)==pow(c,2)) || (pow(c,2)+pow(b,2)==pow(a,2)) || (pow(a,2)+pow(c,2)==pow(b,2))){
			if ((a==b) || (b==c) || (a==c)){
				printf("Tam giac vuong can");
			}else{
				printf("Tam giac vuong");
			}
		}else{
			printf("Tam giac thuong");
		}
		float nuachuvi, dientich;
		nuachuvi = (float)(a + b + c)/2;
		dientich = sqrt(nuachuvi*(nuachuvi - a)*(nuachuvi - b)*(nuachuvi - c));
		printf("\nChu vi hinh tam giac = %.2f", nuachuvi*2);
		printf("\nDien tich hinh tam giac = %.2f", dientich);
	}
}
