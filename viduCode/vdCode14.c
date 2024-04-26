//
// Created by Admin on 24/4/24.
//

#include <stdio.h>

int vdCode14() {
//int main() {
    // Khai bảo mảng 2 chiều để lưu điểm của 5 học viên
    float diem[5][6];

    // Nhập điểm cho từng học viên
    for (int i = 0; i < 5; ++i) {
        printf("Nhập điểm cho học viên %d:\n", i + 1);
        for (int j = 0; j < 6; ++j) {
            printf("Điểm môn học %d:", j + 1);
            scanf("%d", &diem[i][j]);
        }
    }

    // Hiển thị điểm của từng học viên và điểm trung bình
    printf("Danh sách điểm và điểm trung bình của các học viên:\n");
    printf("+------------+--------------+--------------+--------------+--------------+--------------+-----------+\n");
    printf("|  Học Viên  |  Môn Học 1   |   Môn Học 2  |   Môn học 4  |   Môn Học 5  |   Môn Học 6  | Điểm TB   |\n");
    printf("+------------+--------------+--------------+--------------+--------------+--------------+-----------+\n");
    for (int i = 0; i < 5; ++i) {
        float tongDiem = 0;
        printf("|     %d     ", i + 1);
        for (int j = 0; j < 6; ++j) {
            printf("|%9.2f", diem[i][j]);
            tongDiem += diem[i][j];
        }
        float diemTrungBinh = tongDiem / 6;
        printf("| %7.2f |\n", diemTrungBinh);
    }
    return 0;
}