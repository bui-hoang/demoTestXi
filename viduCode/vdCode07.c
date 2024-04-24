//
// Created by Admin on 24/4/24.
//

#include <stdio.h>

int vdCode07() {
//int main() {
    int intArr[10];

    printf("Nhập 10 phần tử cho mảng:\n");
    for (int i = 0; i < 10; i++) {
        printf("Nhập phần tử thứ %d:\n", i + 1);
        scanf("%d", &intArr[i]);
    }

    printf("Các phần tử ở vị trí chắn:\n");
    for (int i = 0; i < 10; i += 2) {
        printf("%d", intArr[i]);
    }
    return 0;
}
