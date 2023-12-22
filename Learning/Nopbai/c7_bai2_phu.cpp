#include "stdio.h"
#include "ctype.h"
int i;
void Hoathuongxenke(char a[]){
	for (i = 0; a[i] != '\0'; i++)
		if (i % 2 == 0)
			a[i] = toupper(a[i]);
		else
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
	Hoathuongxenke(s);
	Inra(s);
}
