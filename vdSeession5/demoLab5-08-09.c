//
// Created by Admin on 17/4/24.
//

#include <stdio.h>

void demoLab5_08_09() {
//void main() {
    int num1, num2 = 0;
    do {
        printf("Enter a number:");
        scanf("%d", &num1);
        printf("No. is %d", num1);
        num2++;
    } while (num1 != 0);
    printf("The total number entered were %d", --num2);
    return;
}