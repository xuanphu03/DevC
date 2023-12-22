#include "stdio.h"

int Kiemtra(int d, int m, int y){
	if(d > 31)
		return 0;
	else
		if(d <= 29){
			if (m == 2)
				if(y % 4 == 0)
					return 1;
				else
					return 0;
			return 1;
		}	
		else if(d == 30)
			return 1;
		else
			if ((m<=7 && m%2!=0) || (m>7 && m%2==0))
				return 1;
			else
				return 0;
}

void Nhapdl(int &d, int &m, int &y){
	printf("Nhap ngay thang nam: ");
	scanf("%d%d%d", &d, &m, &y);
}

void Xuatdl(int test){
	if (test == 1)
		printf("Dung");
	else
		printf("Sai");
}

main(){
	int ngay, thang, nam;
	Nhapdl(ngay,thang,nam);
	Xuatdl(Kiemtra(ngay, thang, nam));
}
