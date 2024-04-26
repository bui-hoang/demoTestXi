//
// Created by Admin on 26/4/24.
//

#include <stdio.h>
// Khai báo nguyên mẫu hàm
void printMenu();
void kiemTraSoDu();
void rutTien();
void guiTien();
float soDu = 0.0;

int codeMauAtm() {
//int main() {
    int choice;
    do {
        printMenu();
        printf("Nhập lựa chọn của bạn:\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                kiemTraSoDu();
                break;
            case 2:
                rutTien();
                break;
            case 3:
                guiTien();
                break;
            case 4:
                printf("Cảm ơn bạn đã sử dụng máy ATM. Chào thân ái!\n");
                break;
            default:
                printf("Lựa chọn không phù hợp. Vui lòng chọn lại.\n");
        }
    } while (choice != 4);

    return 0;
}

void printMenu() {
    printf("------------ Menu ------------\n");
    printf("1: Kiểm tra số dư\n");
    printf("2: Rút tiền\n");
    printf("3: Gửi tiền\n");
    printf("4: Thoát\n");
}

void kiemTraSoDu() {
    printf("Số dư hiện tại là: %.2f\n", soDu);
}

void rutTien() {
    float soTien;
    printf("Nhập số tiền cần rút:\n");
    scanf("%f", &soTien);
    if (soTien > 0 && soTien <= soDu) {
        soDu -= soTien;
        printf("Rút tiền thành công. Số dư còn lại: %.2f\n", soDu);
    } else{
        printf("Số tiền không hợp lệ hoặc số dư không đủ.\n");
    }
}

void guiTien() {
    float soTien;
    printf("Nhập số tiền cần gửi:\n");
    scanf("%f", &soTien);
    if(soTien > 0) {
        soDu += soTien;
        printf("Gửi tiền thành công. Số dư: %.2f\n", soDu);
    }else {
        printf("Số dư không hợp lệ.\n");
    }
}


