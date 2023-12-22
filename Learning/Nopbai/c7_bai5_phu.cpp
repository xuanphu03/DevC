#include "stdio.h"
#include "string.h"
int i;
int Kiemtradoixung(char a[]){
	int j;
	j = strlen(a) - 1;
	for (i = 0; i < strlen(a)/2; i++){
		if (a[i] != a[j])
			return 0;
		j--;
	}
	return 1;	
}
void Nhapchuoi(char a[]){
	printf("Nhap chuoi: ");
	gets(a);	
}
void Inra(int test){
	if (test == 1)
		printf("Doi xung");
	else
		printf("Khong doi xung");
}
main(){
	char s[100];
	Nhapchuoi(s);
	Inra(Kiemtradoixung(s));
}
