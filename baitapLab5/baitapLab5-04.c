//
// Created by Admin on 19/4/24.
//

#include <stdio.h>

int baitapLab5_04() {
//int main() {
    char num;
    do {
        printf("Nhập một kí tự từ bàn phím:\n");
        scanf("%c", &num);
        fflush(stdin);
        if (num >= 'a' && num <= 'z' || num >= 'A' && num <= 'Z') {
            printf("Kí tự %c vừa nhập là chữ cái.\n", num);
        } else if (num >= '0' && num <= '9') {
            printf("Kí tự %c vừa nhập là số.\n", num);
        } else {
            printf("Ký tự %c vừa nhập là kí tự đặc biệt.\n", num);
        }
    } while (num != '\t' && num != ' ' && num != '\n' );

    return 0;
}