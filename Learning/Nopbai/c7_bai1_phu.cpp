#include "stdio.h"
int Count(char a[]){
	int dem = 0, i;
	for (i = 0; a[i] != '\0'; i++){
		if (a[i] == ' ')
			dem++;
	}
	return dem;
}
void Nhapchuoi(char a[]){
	printf("Nhap chuoi: ");
	gets(a);	
}
void Inra(int c){
	printf("Chuoi co %d ki tu trang", c);
}
main(){
	char s[100];
	Nhapchuoi(s);
	Inra(Count(s));
}
