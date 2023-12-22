#include "stdio.h"

int main(){
	//Thi dau: tong >= 15, khong mon nao duoi 4
	// Dau: neu tat ca cac mon lon hon 5 thi Hoc deu cac mon nguoc lai Hoc chua deu cac mon
	// Thi hong
	float toan, ly, hoa;
	printf("Nhap diem toan: "); scanf("%f", &toan);
	printf("Nhap diem ly: "); scanf("%f", &ly);
	printf("Nhap diem hoa: "); scanf("%f", &hoa);
	if ((toan + ly + hoa >= 15) && (toan >= 4) && (ly >=4) && (hoa >=4)){
		printf("Dau\n");
		if ((toan >= 5) && (ly >=5) && (hoa >=5)){
			printf("Hoc deu cac mon");
		}else{
			printf("Hoc chua deu cac mon");
		}
	}else{
		printf("Thi hong");
	}
	
}
