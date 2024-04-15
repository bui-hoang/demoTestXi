//
// Created by Admin on 15/4/24.
//
#include <stdio.h>

int vdCode() {
//int main() {
    char tenDoUong[150];
    int soLuong;
    float gia;
    int menbership;
    float total;
    printf("Nhập tên đồ uống:\n");
    scanf("%[^\n]s", &tenDoUong);
    printf("Nhập số lượng:\n");
    scanf("%d", &soLuong);
    printf("Nhập giá sản phẩm:\n");
    scanf("%f", &gia);
    printf("Nhập mã giảm giá:\n");
    scanf("%d", &menbership);
    switch (menbership) {
        case 1:
            total = gia * soLuong + ((gia * soLuong) * 8 / 100);
            printf("%f", total);
            break;
        case 2:
            total = gia * soLuong +((gia * soLuong) * 8 / 100) * 5 / 100;
            printf("%f", total);
            break;
        case 3:
            total = gia * soLuong +((gia * soLuong) * 8 / 100) * 10 / 100;
            printf("%f", total);
            break;
    }
    return 0;
}
