//
// Created by Admin on 24/4/24.
//

#include <stdio.h>

int vdCode11() {
//int main() {
    int arr[5];
    printf("Nhập 5 số nguyên tố để tạo mảng: \n");
    for (int i = 0; i < 5;) {
        int num;
        printf("Nhập số thứ %d\n", i + 1);
        scanf("%d", &num);

        // Kiểm tra số nguyên tố

        int is_prime = 1;
        if (num < 2) {
            is_prime = 0;
        } else {
            for (int j = 2; j * j <= num; ++j) {
                if (num % j == 0) {
                    is_prime = 0;
                    break;
                }
            }
        }

        // Nếu là số nguyên tố thì gán vào mảng ar[i] và tăng biến i++
        if (is_prime) {
            arr[i] = num;
            i++;
        } else {
            printf("Số bạn nhập không phải là số nguyên tố. Vui lòng nhập lại.\n");
        }
    }

    printf("Các phần tử của mảng là:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d", arr[i]);
    }

    // Tìm phần tử lớn nhất và nhỏ nhất

    int max = arr[0], min = arr[0];
    for (int i = 1; i < 5; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    printf("Phần tử lớn nhất trong mạng là: %d\n", max);
    printf("Phần tử nhỏ nhất trong mảng là: %d\n", min);
    return 0;
}
