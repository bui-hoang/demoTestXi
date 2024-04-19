//
// Created by Admin on 19/4/24.
//

#include <stdio.h>

int baitapLab6_06() {
//int main() {
    int n, i;
    char ans;
    do {
        do {
            printf("Nhập vào một số nguyên nhỏ hơn 10:\n");
            scanf("%d", &n);
        } while (n >= 10) ;
        printf("In ra bảng cuử chương %d\n",n);
        for(i = 1; i <= 10; i++) {
            printf("\t%d x %d = %d\n", i, n, i * n);
        }
        fflush(stdin);
        printf("Bạn có muốn tiếp tục(Y/N):\n");
        scanf("%c", &ans);
    } while (ans == 'Y' || ans == 'y');
    return 0;
}
