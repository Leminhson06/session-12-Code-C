#include <stdio.h>

//Xây dựng hàm tính tổng 2 số có kết quả trả về là tổng tính được.
int numbers(int a, int b){
    return a + b;
}
int main(){
    int a;
    int b;
    int tong = numbers(a,b);
    printf("Moi ban nhap so thu nhat ");
    scanf("%d", &a);
    printf("Moi ban nhap so thu hai");
    scanf("%d", &b);
    printf("Tong cua %d voi %d la: %d", a, b, tong);
    
    return 0;
}
