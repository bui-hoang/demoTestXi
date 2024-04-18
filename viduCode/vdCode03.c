//
// Created by Admin on 17/4/24.
//

#include <stdio.h>

int vdCode03() {
//int main() {
    int i;

    printf("===== Demo for =====\n");
    for (i = 0; i < 10; i++) {
        printf("i = %d\n", i);
    }

    printf("========= Demo while =========\n");
    i = 0;
    while (i < 10) {
        printf("i = %d\n", i);
        i++;
    }

    printf("========= Demo do...while =========");
    i = 0;
    do {
        printf("i = %d\n", i);
        i++;
    } while (i < 10);
    return 0;
}
