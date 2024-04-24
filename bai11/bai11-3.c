//
// Created by Admin on 19/4/24.
//

#include <stdio.h>

void bai11_3() {
//void main() {
    char alpha[26];
    int i,j;
    for (i = 65, j = 0; i < 91; i++, j++) {
        alpha[j] = i;
        printf("The character now assiggned is %c\n", alpha[j]);
    }
}