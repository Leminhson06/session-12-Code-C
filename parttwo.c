#include <stdio.h>

void inMang(int arr[], int size) {
    printf("Cac phan tu trong mang la: \n");
    for(int i = 0; i < size; i++) {
        printf("%d", arr[i]);
    }
    printf("\n");
}

int main(){
    int n;

    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];

    printf("Nhap cac pha tu trong mang: \n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    inMang(arr,n);

    return 0;
}