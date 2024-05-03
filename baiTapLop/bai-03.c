//
// Created by Admin on 3/5/24.
//

#include <stdio.h>

int bai_03() {
//int main() {
    int num1, num2, all;
    printf("Nhập số thứ nhất:\n");
    scanf("%d", &num1);
    printf("Nhập số thứ hai:\n");
    scanf("%d", &num2);
    for (int i = num1; i <= num2 ; ++i) {
        if(i % 50 == 0) {
            printf("%d\n", i);
        }
    }
    return 0;
}