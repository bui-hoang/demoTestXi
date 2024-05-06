//
// Created by Admin on 6/5/24.
//

#include <stdio.h>

float crystalTienDien(int sokWh){
    float tienDien;
    if (sokWh <= 50) {
        tienDien = sokWh * 500;
    }
    else if(sokWh > 50 && sokWh <= 100){
        tienDien = 50 * 500 + (sokWh - 50) * 700;
    }
    else if(sokWh > 100){
        tienDien = 50 * 500 + 50 * 700 + (sokWh - 100) * 900;
    }
    return tienDien;
}

int bai_02(){
//int main() {
    int sokWh;
    float tienDien;
    printf("Nhập số kWh: ");
    scanf("%d", &sokWh);
    printf("Tiền điện cho %dkWh là: %.2f VND\n", sokWh ,crystalTienDien(sokWh));
    printf("--------------------------------\n");
    printf("Giá tiền điện cho 30kWh la: %.2f VND\n", crystalTienDien(30));
    printf("Giá tiền điện cho 80kWh la: %.2f VND\n", crystalTienDien(80));
    printf("Giá tiền điện cho 120kWh la: %.2f VND\n", crystalTienDien(120));
    return 0;
}