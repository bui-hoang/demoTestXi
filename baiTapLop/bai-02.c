//
// Created by Admin on 3/5/24.
//

#include <stdio.h>

int bai_02() {
//int main() {
    int soLuong, gia, tongTien;
    int total;
    printf("Nhập số lượng sản phẩm:\n");
    scanf("%d", &soLuong);
    printf("Nhập giá sản phẩm:\n");
    scanf("%d", &gia);
    tongTien = soLuong * gia;
    printf("Tổng tiền là: %d\n", tongTien);
    if (tongTien >= 100) {
        total = tongTien / 100 * 98;
        printf("Số tiền phải trả: %d\n", total);
    } else if (tongTien >= 200) {
        total = tongTien / 100 * 95;
        printf("Số tiền phải trả: %d\n", total);
    } else {
        printf("Số tiền phải trả: %d\n", tongTien);
    }
    return 0;
}