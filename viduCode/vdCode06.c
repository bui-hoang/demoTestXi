//
// Created by Admin on 17/4/24.
//

#include <stdio.h>

//int vdCode06() {
int main() {
    int count = 0;
    float total = 0;
    char choice;
    char subject[50];
    float score;

    do {
        printf("Nhập tên môn học:\n");
        scanf("%s", &subject);
        printf("Nhập điểm:\n");
        scanf("%f", &score);
        total = score + total;
        count++;
        printf("Bạn có muốn tiếp tục hay không? (y/n):\n");
        scanf(" %c", &choice);
    } while (choice = 'y' || choice == 'Y');

    if (count > 0) {
        double average = total / count;
        printf("Điểm trung bình của bạn là: %.2lf\n", average);
    } else {
        printf("Không có môn học nào được nhập điểm.");
    }
    return 0;
}