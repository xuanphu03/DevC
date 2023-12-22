#include "stdio.h"
#include "ctype.h"
int i;
void Chuthuong(char a[]){
	for (i = 0; a[i] != '\0'; i++)
		a[i] = tolower(a[i]);
}
void Nhapchuoi(char a[]){
	printf("Nhap chuoi: ");
	gets(a);	
}
void Inra(char a[]){
	for (i = 0; a[i] != '\0'; i++)
		printf("%c", a[i]);
}
main(){
	char s[100];
	Nhapchuoi(s);
	Chuthuong(s);
	Inra(s);
}
