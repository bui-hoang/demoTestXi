//
// Created by Admin on 19/4/24.
//


#include <stdio.h>

int baitapLab5_05() {
//int main() {
    int result = 0;
    int num;
    // Nhập vào 1 số nguyên
    printf("Nhập một số nguyên:\n");
    scanf("%d", &num);
    // Vong lặp kiểm tra giá trị của số nguyên nhập
    while (num >=0 && num < 100) {
        result ++;
        printf("Nhập vào một số nguyên:\n");
        scanf("%d", &num);
    }
    // nếu num > 100 hoặc num < 0 thì thoát vòng lặp while và in ra giá trị của biên result
    printf("In ra giá trị của biên result %d.", result);
    return 0;
}