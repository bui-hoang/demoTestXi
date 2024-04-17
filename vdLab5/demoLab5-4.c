//
// Created by Admin on 17/4/24.
//

#include <stdio.h>

void demoLab5_4() {
//void main() {
    int i = 0, j, k;
    printf("Enter no. Of rows:");
    scanf("%d", &i);
    for (j = 0; j < i; j++) {
        //printf("\n");
        for (k = 0; k <= j; k++) {
            printf("*");
        }
    }
    return;
}