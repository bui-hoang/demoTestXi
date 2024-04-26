//
// Created by Admin on 26/4/24.
//

#include <stdio.h>
// Step 1: Khai báo nguyên mẫu hàm
void drawRectangle(); // Khai báo nguyên mẫu (Viết hàm trước main)
void drawTriangle();

int vd07() {
//int main() {
    int num = 5;
    int a = 5, b, c;

    // Step 3: Gọi hàm (Đúng tên hàm và đúng số lượng tham  và kiểu dữ liệu chuyền vào)
    drawRectangle(5);
    drawTriangle(5);

    return 0;
}

// Step 2: định nghĩa hàm
void drawRectangle(int num) {
    for (int i = 0; i <= num; i++) {
        printf("* * * * *\n");
    }
}

void drawTriangle(int a, int b, int c) {
    for (b = 0; b < a; b++) {
        printf("\n");
        for (c = 0; c <= b; c++) {
            printf("*");
        }
    }
}