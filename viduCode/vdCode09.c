//
// Created by Admin on 24/4/24.
//
#include <stdio.h>

int vdCode09() {
//int main() {
    int intArr[10];

    // Nhập dữ liệu cho mảng từ bàn phím
    printf("Nhập 10 phần tử cho mảng:\n");
    for (int i = 0; i < 10; ++i) {
        printf("Nhập phần tử thứ %d:\n", i + 1);
        scanf("%d", &intArr[i]);
    }

    // Xác định giá trị lớn nhất và số lần xuất hiện của nó
    int max = intArr[0];
    int count_max = 1;
    for (int i = 0; i < 10; ++i) {
        if (intArr[i] > max) {
            max = intArr[i];
            count_max = 1;
        } else if (intArr[i] == max) {
            count_max++;
        }
    }

    // Xác định giá trị nhỏ nhất và số lớn nhất xuất hiển của nó
    int min = intArr[0];
    int count_min = 1;
    for (int i = 1; i < 10; ++i) {
        if (intArr[i] < min) {
            min = intArr[i];
            count_min = 1;
        } else if (intArr[i] == min) {
            count_min++;
        }
    }

    // Tính tổng các phần tử và trung bình cộng
    int sum = 0;
    for(int i = 0; i < 10; i++) {
        sum += intArr[i];
    }
    float average = (float) sum / 10;

    // Hiển thị kết quả
    printf("Giá trị lớn nhất là %d, số lần xuất hiện là %d\n", max, count_max);
    printf("Giá trị nhỏ nhất là %d, số lần xuất hiện là %d\n", min, count_max);
    printf("Tổng các phần tử là %d\n", sum);
    printf("Trung bình cộng của các phẩn tủ là: %.2f\n", average);
    return 0;
}