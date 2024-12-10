#include <stdio.h>

int isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main(){
    int num1, num2;
    // Nhap hai so nguyen
    printf("Nhap so nguyen thu nhat: ");
    scanf("%d", &num1);
    printf("Nhap so nguyen thu hai: ");
    scanf("%d", &num2);
    // Kiem tra va in ra ket qua
    printf("%d la so nguyen to.\n", num1, isPrime(num1));
    printf("%d la so nguyen to.\n", num2, isPrime(num2));

    return 0;
}
