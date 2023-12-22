#include "stdio.h"

int UCLN(int a, int b){
    if (a * b == 0){
        if((a == 0) && (b != 0)){
            return a;
        }else if ((a != 0) && (b == 0)){
            return b;
        }else{
            return 0;
        }
    }else{
        if (a % b == 0){
            return b;
        }else{
            return UCLN(b, a % b);
    }
    }    
}

int main(){
    int a, b;
    printf("Nhap a = ");
    scanf("%d",&a);
    printf("Nhap b = ");
    scanf("%d", &b);
    printf("UCLN %d va %d la %d", a, b, UCLN(a,b));
}