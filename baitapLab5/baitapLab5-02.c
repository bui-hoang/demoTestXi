//
// Created by Admin on 19/4/24.
//

#include <stdio.h>

int baitapLab5_02() {
//int main() {
    int num1, num2, all = 0;
    printf("Nhập một số bất kì:\n");
    scanf("%d", &num1);
    for (; num1 != 0;) {
        num2 = num1 % 10;
        all = all + num2;
        num1 = num1 / 10;
    }
    printf("%d", all);
    return 0;
}