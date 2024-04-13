//
// Created by Admin on 12/4/24.
//

#include <stdio.h>

int vd05(){
//int main() {
     printf("Bạn đã đăng nhập thành công. Good Good!\n");
     printf("Bạn muốn sử dụng chức năng nào!\n");
     printf("1: Rút tiền!\n");
     printf("2: Kiểm Tra số dư tài khoản!\n");
     printf("3: Chuyển khoản!\n");
     printf("4: Kiểm tra lịch sử giao dịch!\n");
     printf("Chọn các lựa chọn từ 1 -> 4 đi!");

     int choose = 0;
     scanf("%d", &choose);
     if(choose >= 1 && choose <= 4){
         if(choose == 1){
             printf("Giao dịch thành công. Số tiền còn lại là 4 nghìn tỉ USDT.\n");
         }else if(choose == 2){
             printf("Số dư trong tài khoản của bạn là hàng nghìn tỉ USDT!\n");
         }else if(choose == 3){
             printf("Bạn hãy nhập số tài khoản cần chuyển!");
         }else if(choose == 4){
             printf("Danh sách các giao dịch gần đây của bạn!\n");
         }
     }else{
         printf("Lựa chọn không phù hợp. Chọn các số từ 1 -> 4!");
     }
     printf("\n");
     return 0;
}