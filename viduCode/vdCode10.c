//
// Created by Admin on 24/4/24.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 20

int vdCode10(){
//int main() {
    int intArr[ARRAY_SIZE];

    // Khởi tạo seed cho hàm rand() dựa trên thời gian hiển tại
    srand(time(NULL));

    // Sinh ngẫu nhiên giá trị cho các phần tử của mảng
    printf("Các phần tử của mảng:\n");
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        intArr[i] = rand() % 100; // Giả sử giá trị ngẫu nhiên từ 0 --> 90
        printf("%d", intArr[i]);
    }

    // Nhập số từ bàn phím
    int num;
    printf("Nhập số cần kiểm tra:\n");
    scanf("%d", &num);

    // Kiểm tra số nhập vào có thuộc mảng không
    int found = 0;
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        if (intArr[i] == num) {
            found = 1;
            break;
        }
    }

    // Hiển thị hết quả
    if (found) {
        printf("Số %d thuộc mảng được sinh ngẫu nhiên.\n", num);
    } else {
        printf("Số %d không thuộc mảng được sinh ngẫu nhiên.\n", num);
    }
    return 0;
}
