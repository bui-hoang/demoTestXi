//
// Created by Admin on 14/4/24.
//

#include <stdio.h>

int baitapLab8_01() {
//int main() {
    int m1, m2, m3, avg;
    printf("Nhập điểm môn m1:\n");
    scanf("%d", &m1);
    printf("Nhập điểm môn m2:\n");
    scanf("%d", &m2);
    printf("Nhập điểm môn m3:\n");
    scanf("%d", &m3);
    avg = (m1 + m2 + m3) / 3;
    printf("Tổng điểm của bạn là: = %d\n", avg);
    if(avg < 3) {
        printf("Bạn đã trượt. Chúc mừng bạn.");
    } else if (avg < 5) {
        printf("Bạn được xếp loại B+.");
    } else if (avg < 6) {
        printf("Bạn được xếp loại A.");
    } else if(avg < 7) {
        printf("Bạn được xếp loại A+.");
    } else if(avg < 9) {
        printf("Bạn được xếp loại E.");
    } else {
        printf("Bạn được xếp loại E+.");
    }
    return 0;
}