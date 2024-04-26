//
// Created by Admin on 26/4/24.
//

#include <stdio.h>
// 1: Khai báo nguyên mẫu hàm
void draw_rec(int s);

int vd08() {
//int main() {
    int size;
    // 3: Gọi hàm
    printf("Cạnh có 3 ngôi sao\n");
    draw_rec(3);

    printf("Một đoạn code khác....\n");
    printf("Cạnh có 5 ngôi sao\n");
    draw_rec(5);

    printf("Bạn muốn có bao nhiêu ngôi sao ở cạnh?\n");
    scanf("%d", &size);
    draw_rec(size);
    return 0;
}

// 2: Định nghĩa hàm
void draw_rec(int s) {
    printf("Vẽ hình vương mới nào:\n");
    for (int i = 0; i < s; i++) {
        printf("\n");
        for (int j = 0; j < s; ++j) {
            printf("*");
        }
    }
    printf("\n Done \n");
}