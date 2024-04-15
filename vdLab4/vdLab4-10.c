//
// Created by Admin on 15/4/24.
//

#include <stdio.h>
// Chương trình chuyển từ Mét sang KM, CM, DM, MM
int vdLab4_10() {
//int main() {
    int doDai, temp;
    printf("Nhập độ dài cần đổi:\n");
    scanf("%d", &doDai);
    printf("==============Menu==============\n");
    printf("1: Quy đổi sang KM.\n");
    printf("2: Quy đổi sang DM.\n");
    printf("3: Quy đổi sang CM.\n");
    printf("4: Quy đổi sang MM.\n");
    printf("================================\n");
    int choice = 0;
    scanf("%d", &choice);
    if(choice >= 1 && choice <= 4) {
        switch (choice) {
            case 1:
                temp = doDai / 1000;
                printf("%d Mét đổi sang bằng %d KM", doDai, temp);
                break;
            case 2:
                temp = doDai * 10;
                printf("%d Mét đổi sang bằng %d DM", doDai, temp);
                break;
            case 3:
                temp = doDai * 100;
                printf("%d Mét đổi sang bằng %d CM", doDai, temp);
                break;
            case 4:
                temp = doDai * 1000;
                printf("%d Mét đổi sang bằng %d MM", doDai, temp);
                break;
            default:
                printf("Chọn từ 1 --> thôi!");
        }
    }
    return 0;
}
