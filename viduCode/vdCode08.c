//
// Created by Admin on 24/4/24.
//

#include <stdio.h>

int vdCode08() {
//int main(){
    int intArr[5];
    float floatArr[10] = {0}; // Khởi tạo tất cả các phần tử của mảng floatArr bằng 0

    // Nhập các phần tử cảu mảng intArr từ người dùng
    printf("Nhập 5 số nguyên:\n");
    for (int i = 0; i < 5; ++i) {
        printf("Nhập số thứ %d:\n", i + 1);
        scanf("%d", &intArr[i]);
    }

    // Sao chép các phần tử của mảng intArr sang mảng floatArr
    for (int i = 0; i < 5; ++i) {
        floatArr[i] = (float)intArr[i]; // Ép kiểu từ int sang float
    }

    // Hiển thị toàn bộ các phần tử của mảng intArr
    printf("Các phần tử của mảng intArr:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d", intArr[i]);
    }

    // Hiển thị toàn bộ các phần tử của mảng floatArr
    printf("\nCác phẩn tử của mảng floatArr:\n");
    for(int i = 0; i < 10; i++){
        printf("%.2f", floatArr[i]);
    }
    return 0;
}