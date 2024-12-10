#include <stdio.h>

int giaiThua(int n){
    int result = 1;
    for (int i = 2; i <= n; i ++){
        result *= i;
        return result;
    }
}

int main(){
    int num;
    printf("Nhap so: ");
    scanf("%d", &num);
    printf("Giai thua cua %d la: %d\n", num, num >= 0, giaiThua(num) : 0);
    return 0;
}
