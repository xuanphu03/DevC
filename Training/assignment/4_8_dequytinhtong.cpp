#include "stdio.h"

int tinhtong(int n){
    int sum = n;
    if (n == 0){
        return sum;
    }else{
        printf("%d",sum);
        return sum += tinhtong(n-1);
    }
}

int main(){
    int n;
    printf("Nhap n = ");
    scanf("%d", &n);
    printf("Tong cua %d so dau tien = %d", n, tinhtong(n));
}