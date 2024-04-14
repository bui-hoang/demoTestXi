//
// Created by Admin on 12/4/24.
//

#include "stdio.h"

int vd04(){
//int main() {
    printf("Bạn đã đăng nhập thành công. Good good!\n");
    printf("Bạn muốn sử dụng chức năng nào:\n");
    printf("1: Rút tiền!\n");
    printf("2: Kiểm tra số dư!\n");
    printf("3: Chuyển khoản!\n");
    printf("4: Kiểm tra lịch sử giao dịch!\n");
    printf("5: Thoát!\n");
    printf("Mời bạn nhấn các lựa chọn:\n");
    int choose = 0;
    scanf("%d", &choose);

    if(choose >= 1 && choose <=5){
        switch (choose) {
            case 1:
                printf("Giao dịch thành công. Số tiển của bạn là: 4 tỉ triệu USDT\n");
                break;
            case 2:
                printf("Số dư trong tài khoản của bạn là: 0 Nghìn nào.\n");
                break;
            case 3:
                printf("Bạn hãy nhập số tài khoản bạn cần chuyển:\n");
                break;
            case 4:
                printf("Danh sách các giao dịch gần đây nhất của bạn.\n");
                break;
            case 5:
                printf("Cảm ơn bạn đã sử dụng dịch vụ ngân hàng số 0!\n");
            default:
                printf("Bạn chọn chưa cẩn thận hay chọn chính xác!\n");
        }
    }else{
        printf("Lựa chọn của bạn không phừ hợp. Bạn hãy cọn các mục từ 1 -> 4.");
    }
    printf("\n");
    return 0;
}