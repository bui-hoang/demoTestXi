//
// Created by Admin on 24/4/24.
//

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>



int vdCode15() {
//int main() {
    // Thiết lập seed cho hàm random
    srand(time(NULL));

    int mang[20]; // Mảng chứa số nguyên
    int soLuong = 0; // Biến đếm số lượng nguyên tố

    // Sinh ngẫu nhiên số nguyên tố nhỏ hơn 200 và lưu vào mảng
    while(soLuong < 20) {
        int soNgauNhien = rand() % 200; // Sinh số ngẫu nhiên từ 0 --> 199

        // Kiểm tra xem số ngẫu nhiên có phải là số nguyên tố không
        bool laNguyeenTo = true;
        if(soNgauNhien < 2) {
            laNguyeenTo = false;
        } else{
            for (int i = 2; i * i <= soNgauNhien; ++i) {
                if(soNgauNhien % i == 0){
                    laNguyeenTo == false;
                    break;
                }
            }
        }

        // Nếu là số nguyên tố, lưu vào mảng
        if(laNguyeenTo) {
            if (laNguyeenTo) {
                mang[soLuong] = soNgauNhien;
                soLuong++;
            }
        }

        // Hiển thì mảng số nguyên tố
        printf("Các số nguyên tố nhỏ hơn 200 là:\n");
        for (int i = 0; i < 20; ++i) {
            printf("%d", mang[i]);
        }
    }
}
