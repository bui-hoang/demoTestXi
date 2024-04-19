//
// Created by Admin on 19/4/24.
//

#include <stdio.h>

int baitapLab5_03() {
//int main() {
    int height, i, j;
    do {
        printf("Nhập vào chiều cao của tam giác:\n");
        scanf("%d", &height);
    } while (height < 2);

    printf("\n");
    for (i = 1; i <= height; i++) {
        for (j = 1; j <= i; j++){
            printf("%c", '*');
            printf("\n");
        }
    }

    printf("\n");
    i = 1;
    while (i <= height){
        j = 1;
        while (j <= 1){
            printf("%c", '*');
            j++;
        }
        printf("\n");
        i++;
    }


    return 0;
}