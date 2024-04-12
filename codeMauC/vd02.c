//
// Created by Admin on 11/4/24.
//
#include <stdio.h>
int vd02(){
//int main(){
    int a = 5;
    int b = 10;
    int c = 7;

    //Toán tử toán học
    int tong = a + b;    // Phép cộng
    int hieu = a - b;    // Phép trừ
    int tich = a * b;    // Phép nhân
    int thuong = b / a;  // Phép chia
    //  Toán tử quan hệ
    int Ketqua1 = (a > b); // So sánh lớn hơn
    int Ketqua2 = (a <= b); // So sánh nhỏ hơn hoặc bằng
    int Ketqua3 = (a == c); // So sánh bằng
    int Ketqua4 = (a!= c); // So sánh khác
    // Toán tử logic
    int Ketqua5 = (a < b && b > c); // Toán tử logic AND
    int Ketqua6 = (a < b || b < c); // Toán tử logic OR
    int Ketqua7 = !(a < b); // Toán tử logic NOT

    printf("Tong: %d\n", tong);
    printf("Hieu: %d\n", hieu);
    printf("Tich: %d\n", tich);
    printf("Thuong: %d\n", thuong);

    printf("Ket qua 1: %d\n", Ketqua1);
    printf("Ket qua 2: %d\n", Ketqua2);
    printf("Ket qua 3: %d\n", Ketqua3);
    printf("Ket qua 4: %d\n", Ketqua4);

    printf("Ket qua 5: %d\n", Ketqua5);
    printf("Ket qua 6: %d\n", Ketqua6);
    printf("Ket qua 7: %d\n", Ketqua7);
    return 0;
}
