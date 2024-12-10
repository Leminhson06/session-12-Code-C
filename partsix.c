#include <stdio.h>

// Ham kiem tra so hoan hao
int isPerfect(int n){
    if (n <= 0) return false; // So hoan hao phai la so duong
    int sum = 0;
    for (int i = 1; i <= n / 2; i++) {
        if(n % i == 0) {
            sum += i;
        }
    }
    return sum == n;
}

int main(){
    int num1, num2;

    // Nhap hai so nguyen
    printf("Nhap so nguyen thu nhat: ");
    scanf("%d", &num1);
    printf("Nhap so nguyen thu hai: ");
    scanf("%d", &num2);

    // Kiem tra va in ket qua
    printf("%d la so hoan hao.\n", num1, isPerfect(num1));
    printf("%d la so hoan hao.\n", num2, isPerfect(num2));
    
    return 0;
}