#include "stdio.h"

int tongle(int n){
    int sum = 2*n+1;
    if (n == 0){
        return sum;
    }else{
        sum += tongle(n-1);
    }
}

int main(){
    int n;
    printf("Nhap n = ");
    scanf("%d", &n);
    printf("Tong cac so le = %d", tongle(n));
}
