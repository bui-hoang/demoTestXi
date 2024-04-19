//
// Created by Admin on 17/4/24.
//

#include <stdio.h>

void demoLab5_12() {
//void main() {
    int num;
    for (num = 1; num <= 100; num++) {
        if (num % 9 == 0)continue;
        printf("%d\t", num);
    }
    return;
}
