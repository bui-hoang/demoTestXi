//
// Created by Admin on 14/4/24.
//
#include <stdio.h>

int baitapLab8_04() {
//int main() {
    int a, b, c, all;
    printf("Chương trình nhâp 3 số bất kì tìm số lớn nhất.. Bắt đầu:\n");
    printf("Nhâp số bất kì a:");
    scanf("%d", &a);
    printf("Nhâp số bất kì b:");
    scanf("%d", &b);
    printf("Nhâp số bất kì c:");
    scanf("%d", &c);
    if(a > b && a > c) {
        all = a;
    } else if(b > c && b > a) {
        all = b;
    } else if(c > b && b > a) {
        all = c;
    } else {
        all = c;
    }
    printf("Số lớn nhất trong 3 số đã nhập là: %d", all);
    return 0;
}