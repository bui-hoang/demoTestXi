//
// Created by Admin on 26/4/24.
//

#include <stdio.h>

int performOperation(int num1, int num2, char operator) {
    int result;
    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        default:
            printf("Invalid operator\n");
            result = 0;
    }
    return result;
}

int vd11() {
//int main() {
    int num1, num2;
    char operator;

    printf("Enter first number:\n");
    scanf("%d", &num1);
    printf("Enter an operator (Cộng - Trừ - Nhân - Chia):\n");
    scanf(" %c", &operator);
    printf("Enter second number:\n");
    scanf("%d", &num2);

    int result = performOperation(num1, num2, operator);
    printf("Result: %d\n", result);

    return 0;
}