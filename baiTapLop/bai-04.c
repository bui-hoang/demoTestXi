//
// Created by Admin on 3/5/24.
//

#include <stdio.h>

// Tìm hàm có giá trị lớn nhất trong mảng
int findMaxElement(int arr[], int n) {
    int maxElement = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }
    return maxElement;
}

// Tìm hàm có giá trị nhỏ nhất trong mảng
int findMinElement(int arr[], int n) {
    int minElement = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] < minElement) {
            minElement = arr[i];
        }
    }
    return minElement;
}

int bai_04(){
//int main() {
    int n;
    printf("Nhập các số lượng phần tử của mảng:\n");
    scanf("%d", &n);

    int arr[n];
    printf("Nhập các phần tử của mảng:\n");
    for (int i = 0; i < n; i++) {
        printf("Phần tử %d:\n", i + 1);
        scanf("%d", &arr[i]);
    }

    int maxElement = findMaxElement(arr, n);
    int minElement = findMinElement(arr, n);

    printf("Giá trị lớn nhất trong mảng: %d\n", maxElement);
    printf("Giá trị nhỏ nhất trong mảng: %d\n", minElement);

    return 0;
}