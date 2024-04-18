//
// Created by Admin on 17/4/24.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int vdCode05() {
//int main() {
    int guess, randomNumber;

    srand(time(0));
    randomNumber = rand() % 100 + 1;

    do {
        printf("Guess the number (between 1 and 100):");  // Đoán số (từ 1 đến 100)
        scanf("%d", &guess);
        if (guess > randomNumber) {
            printf("Too high\n"); // Quá cao
        } else if (guess < randomNumber) {
            printf("Too low\n");  // Quá thấp
        } else {
            printf("Congratulations! You gussed the number.\n"); // Chúc mừng! Bạn đã đoán được con số
        }
    } while (guess != randomNumber);
    return 0;
}