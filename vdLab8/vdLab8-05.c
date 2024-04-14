//
// Created by Admin on 14/4/24.
//

#include <stdio.h>

void vdLab8_05() {
//void main() {
    int num1 = 90, num2 = 33, res;
    char op = '-';
    //printf("Vui lòng chọn (cộng, trừ, nhân, chia):");
    //scanf("%c", &op);
    switch (op) {
        case '+':
            res = num1 + num2;
            printf("the sum is:%d", res);
            break;
        case '-':
            res = num1 - num2;
            printf("Number afterr subtraction: %d", res);
            break;
        case '/':
            res = num1 / num2;
            printf("Numberr after division: %d", res);
            break;
        case '*':
            res = num1 * num2;
            printf("Numberr after multiplication:", res);
            break;
        default:
            printf("Invalid");
            break;
    }
    return;
}
