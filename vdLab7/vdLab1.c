//
// Created by Admin on 12/4/24.
//
#include <stdio.h>
int vdLab1() {
//int main() {
    int a; // Khai báo biến
    printf("Nhập vào một số bất kỳ:");
    scanf("%d", &a); // Nhập số a
    if(a % 2 == 0) { // Nếu chia hết cho 2 là số chắn (in ra dòng 10)
        printf("Số bạn nhập là số chẵn.");
    } else { // Ngược lại, không chia hết cho 2 là số lẻ (in ra dòng 12)
        printf("Số bạn nhập là số lẻ.");
    }
    return 0;
}
