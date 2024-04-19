//
// Created by Admin on 17/4/24.
//

#include <stdio.h>

void demoLab5_03() {
//void main() {
    int i, j, max;
    printf("Please enter the maximun value\n");
    printf("for which a table can be printed");
    scanf("%d", &max);
    for (i = 0, j = max; i <= max; i++, j--) {
        printf("%d + %d = %d\n", i, j, i + j);
    }
    return;
}