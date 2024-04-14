//
// Created by Admin on 14/4/24.
//

#include <stdio.h>

int baitapLab8_03() {
//int main() {
    char nhap;
    printf("Nhập một chữ cái thường bất kì:");
    scanf("%c", &nhap);
    switch (nhap) {
        case 'a':
            printf("Alo.");
            break;
        case 'b':
            printf("Basic");
            break;
        case 'c':
            printf("Class");
            break;
        case 'd':
            printf("Deep");
            break;
        case 'e':
            printf("E đờ rốp");
            break;
        case 'f':
            printf("Fờ lo");
            break;
        case 'g':
            printf("Good");
            break;
        case 'h':
            printf("Hép bi");
            break;
        default:
            printf("Nhập chữ khác đi. Chữ đó chưa nghĩ ra.");
    }
    return 0;
}