//
// Created by Admin on 17/4/24.
//
// Ngân hàng số
#include <stdio.h>

int vdCode02() {
//int main() {
    int pin = 6789; // Mã pin mặc định.
    int balance = 1000; // Số dư ban đầu.
    int maxAttempts = 3; // Số lần nhập sai tối đa.
    int option;
    int enteredPin;
    int withdrawAmount;

    printf("Chào mừng bạn đến với ngân hàng số ATM:\n");

    int attempts = 0; // Số lần đã nhập sai.
    while (attempts < maxAttempts) {
        printf("Nhập mã PIN của bạn (Còn lại %d lần thôi:) Mã PIN:\n", maxAttempts - attempts);
        scanf("%d", &enteredPin);
        // Kiểm tra mã PIN
        if (enteredPin == pin) {
            printf("Đăng nhập thành công.\n");
            break; // Thoát khỏi vòng lặp nếu đăng nhập thành công.
        } else {
            printf("Mã PIN không hợp lệ.\n");
            attempts++;
        }
    }

    if (attempts == maxAttempts) {
        printf("Bạn đã nhập sai số lần cho phép.Chúc mừng bạn đã được khoá tài khoản.\n");
        return 1; // kết thúc chương trình
    }

    while (1) {
        printf("Lựa chọn của bạn:\n");
        printf("1: Kiểm tra số dư.\n");
        printf("2: Rút tiền.\n");
        printf("3: Kết thúc.\n");

        scanf("%d", &option);

        switch (option) {
            case 1:
                printf("Số dư của bạn: %d nghìn tỉ $.\n", balance);
                break;
            case 2:
                printf("Nhập số tiền bạn muốn rút:\n");
                scanf("%d", &withdrawAmount);
                if (withdrawAmount > balance) {
                    printf("Số dư không đủ để rút tiền!\n");
                } else {
                    balance = balance - withdrawAmount;
                    printf("Bạn đã rút %d tỉ $. Số dư còn lại: %d tỉ $\n", withdrawAmount, balance);
                }
                break;
            case 3:
                printf("Cảm ơn bạn đã sử dụng dịch vụ của ngân hàng số ATM. Chào thân ái.");
                return 0; // Kết thúc chương trình.
            default:
                printf("Lựa chọn không hợp lệ. Chọn lại đi.\n");
        }
    }
    return 0;
}
