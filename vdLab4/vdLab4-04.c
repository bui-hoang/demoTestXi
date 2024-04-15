//
// Created by Admin on 15/4/24.
//

#include <stdio.h>
// Viết chương trình cho phép nhận 1 lí tự(A-Z; a-z) từ bàn phím, nếu kí tự không thuộc bảng chứ cái thì thông báo. Nếu thuộc bảng chữ cái thì xác định nó là nguyên âm hay phụ âm
int vdLab4_04() {
//int main() {
    char num1;
    printf("Nhập một ký tự từ bàn phím:");
    scanf("%c", &num1);
    if (num1 >= 'a' && num1 <= 'z') {
        printf("%c: ký tự bạn nhập thuộc bảng Alphabet!\n", num1);
    } else if (num1 >= 'A' && num1 <= 'Z') {
        printf("%c: Ký tự bạn nhập thuộc bảng Alphabet!\n", num1);
    } else {
        printf("%c: Ký tự bạn nhập không có trong bảng Alphabet!\n", num1);
    }
    switch (num1) {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("%c: ký tự bạn nhập là nguyên âm!\n", num1);
            break;
        default:
            printf("%c: Ký tự bạn nhập là phụ âm!\n", num1);
    }
    return 0;
}