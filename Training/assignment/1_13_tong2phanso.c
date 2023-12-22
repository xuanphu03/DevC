#include "stdio.h"

int main(){
	int t1,t2,m1,m2; //Tu mau lan luot cua hai phan so
	printf("Nhap tu va mau cua so thu nhat: ");
	scanf("%d%d",&t1,&m1);
	printf("\nNhap tu va mau cua so thu hai: ");
	scanf("%d%d", &t2,&m2);
	printf("\n%.2f",((float)t1/m1) + ((float)t2/m2));
	
}
