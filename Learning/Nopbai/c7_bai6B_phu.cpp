#include "stdio.h"
#include "string.h"
int i,j;
int Tachchuoi(char a[], char b[]){
	int lenB = strlen(b), lenA = strlen(a);
	int count = 0, m = 0;
	for (i = 0; i < lenA; i++){
		if (a[i] == b[m] && lenA - i >= lenB - 1)
			m++;
		else
			m = 0;
		if (m == lenB - 1)
			count = count + 1;
		
	}
	return count;
}
void Nhapchuoi(char a[], char b[]){
	printf("Nhap chuoi: ");
	gets(a);
	fflush(stdin);
	printf("Nhap tu: ");
	gets(b);	
}
void Inra(int c){
	printf("%d", c);
}
main(){
	char s1[255], s2[255];
	Nhapchuoi(s1, s2);
	Inra(Tachchuoi(s1, s2));
}
