//
// Created by Admin on 24/4/24.
//

#include <stdio.h>

#define MAX_NAME_LENGTH 30
#define NUM_STUDENTS 5

int vdCode12() {
//int main() {
    char studentName[NUM_STUDENTS] [MAX_NAME_LENGTH + 1]; // Mảng 2 chiều dể lưu tên học viên

    // Nhập danh sách tên học viên
    printf("Nhập danh sách 5 tên học viên:\n");
    for (int i = 0; i < NUM_STUDENTS; ++i) {
        printf("Nhập tên học viên thứ %d:\n", i + 1);
        fflush(stdin);
        scanf("%30[^\n]s", studentName[i]); // Sử dụng 0s để chỉ đọc tối đa 30 ký tự
    }

    // Hiển thị danh sách tên học viên
    printf("Danh sách tên học viên:\n");
    for (int i = 0; i < NUM_STUDENTS; ++i) {
        printf("%d. %s\n", i + 1, studentName[i]);
    }
    return 0;
}