#include "stdio.h"
#include "math.h"

main(){
	float diemtoan, diemly, diemhoa, dtb;
	printf("Nhap diem toan: ");
	scanf("%f", &diemtoan);
	printf("Nhap diem ly: ");
	scanf("%f", &diemly);
	printf("Nhap diem hoa: ");
	scanf("%f", &diemhoa);
	dtb = (diemtoan + diemly + diemhoa) / 3;
	if(dtb < 4){
		printf("Loai F");
	}
	else if(dtb < 5.5){
		printf("Loai D");
	}
	else if(dtb < 7){
		printf("Loai C");
	}
	else if(dtb < 8.5){
		printf("Loai B");
	}
	else{
		printf("Loai A");
	}
}
