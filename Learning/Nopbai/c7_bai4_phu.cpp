#include "stdio.h"
#include "ctype.h"
int i;
void Chuhoa(char a[]){
	for (i = 0; a[i] != '\0'; i++)
		a[i] = toupper(a[i]);
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
	Chuhoa(s);
	Inra(s);
}
