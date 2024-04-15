//
// Created by Admin on 15/4/24.
//

#include <stdio.h>
// Nhập 1 ký tự từ bàn phím, xem đó là in hoa hay thường.vd2: thông báo số sai nếu nhập vào 0-9. vd 3
int vdLab4_03() {
//int main() {
    char num1;
    int num2;
    printf("Nhập một chữ bất kì từ bàn phím:");
    scanf("%c", &num1);
    if (num1 >= 'A' && num1 <= 'Z') {
        printf("%c: ký tự bạn nhập là dạng in hoa!\n", num1);
    } else {
        printf("%c: ký tự bạn nhập vào là dạng chữ thường!", num1);
    }
    printf("Nhập một số bất kì (0 -> 9) từ bàn phím:");
    scanf("%d", &num2);
    if (num2 >= 0 && num2 <= 9) {
        printf("Số Bạn nhập %d: là chữ số!", num2);
    } else {
        printf("Sai cú pháp.");
    }
    return 0;
}