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
        tienDien = sokWh  * 700;
    }
    else if(sokWh > 100){
        tienDien = sokWh  * 900;
    }
    return tienDien;
}

int bai_02(){
//int main() {
    int sokWh;
    float tienDien;
    printf("Nhập số kWh: ");
    scanf("%d", &sokWh);
    printf("Tiền điện cho %dkWh là: %.2f VND", sokWh ,crystalTienDien(sokWh));
    printf("\n------------------------------");
    printf("\nGia tien cho 30kWh la: %.2f VND", crystalTienDien(30));
    printf("\nGia tien cho 80kWh la: %.2f VND", crystalTienDien(80));
    printf("\nGia tien cho 120kWh la: %.2f VND", crystalTienDien(120));
    return 0;
}