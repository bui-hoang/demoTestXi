//
// Created by Admin on 24/4/24.
//

#include <stdio.h>

int vdCode13() {
//int main() {
    char characters[10]; // Mảng để lưu trữ các ký tự nhập vào
    int i = 0; // Biến đếm số lượng ký tự đã nhập

    printf("Nhập tối đa 10 ký tự (Nhấn Enter để kết thúc):\n");

    // Nhập ký tự cho đến khi đạt tối đa 10 ký tự hoặc gặp ký tự "Enter"

    while (i < 10) {
        char c = getchar(); // Nhânj ký tự từ bàn phím

        //  kiểm tra nếu là ký tự enter thì dừng vòng lặp

        if (c == '\n') {
            break;
        }
        characters[i] = c; // Lưu ký tự vào mảng
        i++; // Tăng biến đếm
    }

    // Hiển thị dánh sách ký tự đã nhập và mã ASCII
    printf("Danh sách ký tự đã nhập và mã ASCII tương ứng:\n");
    for (int j = 0; j < i; j++) {
        printf("%c: %d\n", characters[i], characters[j]);
    }
    return 0;
}
