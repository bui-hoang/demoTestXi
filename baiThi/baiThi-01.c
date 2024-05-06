//
// Created by Admin on 6/5/24.
//

#include <stdio.h>

//int bai_01() {

int giaTriNhoNhat(int arr[], int n) {
    int min = arr[0];
    int i;
    for (i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int baiThi_01(){
//int main() {
    int arr[500];
    int n;
    printf("Nhập các số lượng phần tử của mảng:\n");
    scanf("%d", &n);
    printf("Nhập các phần tử của mảng:\n");
    for (int i = 0; i < n; i++) {
        printf("Phần tử %d:\n", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Giá trị nhỏ nhất trong mảng là: %d", giaTriNhoNhat(arr, n));
    return 0;
}
