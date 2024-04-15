//
// Created by Admin on 15/4/24.
//

#include <stdio.h>

int vdLab4_11() {
//int main() {
    int num1, num2, tong;
    float tongChia;
    printf("Nhập số thứ nhất:\n");
    scanf("%d", &num1);
    printf("Nhập số thứ hai:\n");
    scanf("%d", &num2);
    printf("=================Menu=================\n");
    printf("1: Phép +\n");
    printf("2: Phép -\n");
    printf("3: Phép *\n");
    printf("4: Phép :\n");
    printf("Vui lòng chọn từ 1 --> 4\n");
    int choice = 0;
    scanf("%d", &choice);
    if(choice >= 1 && choice <= 4){
        switch (choice) {
            case 1:
                tong = num1 + num2;
                printf("Giá trị của %d + %d = %d", num1, num2, tong);
                break;
            case 2:
                tong = num1 - num2;
                printf("Giá trị của %d - %d = %d", num1, num2, tong);
                break;
            case 3:
                tong = num1 * num2;
                printf("Giá trị của %d * %d = %d", num1, num2, tong);
                break;
            case 4:
                tongChia = num1 / num2;
                printf("Giá trị của %d : %d = %f", num1, num2, tongChia);
                break;
            default:
                printf("Vui lòng nhập đúng cú pháp!");
        }
    }
    return 0;
}