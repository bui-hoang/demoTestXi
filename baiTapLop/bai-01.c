//
// Created by Admin on 3/5/24.
//

#include <stdio.h>

int bai_01() {
//int main() {
    int width, height;
    int chuVi, dienTich;
    printf("Nhập chiều dài:\n");
    scanf("%d", &width);
    printf("Nhập chiều rộng:\n");
    scanf("%d", &height);
    chuVi = (width + height) * 2;
    printf("Chu vi hình chữ nhật là: %d\n", chuVi);
    dienTich = width * height;
    printf("Diện tích hình chữ nhật là: %d\n", dienTich);
    return 0;
}
