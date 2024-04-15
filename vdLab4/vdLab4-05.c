//
// Created by Admin on 15/4/24.
//

#include <stdio.h>
// Viết chương trình menu. Thông báo ra màn hình với các lựa chọn từ 1-->6
int vdLab4_05() {
//int main() {
    printf("-------------Menu-------------\n");
    printf("==============================\n");
    printf("1. CF\n");
    printf("2. C\n");
    printf("3. HDJ\n");
    printf("4. DreamWeaver\n");
    printf("5. RDBMS\n");
    printf("6. Learn Java By Example\n");
    printf("==============================\n");
    printf("Chọn từ 1 --> 6:\n");
    int choice = 0;
    scanf("%d", &choice);
    if(choice >= 1 && choice <=6){
        switch (choice) {
            case 1:
                printf("1. CF");
                break;
            case 2:
                printf("2. C");
                break;
            case 3:
                printf("3. HDJ");
                break;
            case 4:
                printf("4. DreamWeaver");
                break;
            case 5:
                printf("5. RDBMS");
                break;
            case 6:
                printf("6. Learn Java By Example");
                break;
            default:
                printf("Lựa chọn của bạn không chính xác!\n");
        }
    }else{
        printf("Sai cú pháp. Chọn từ 1 --> 6 thôi.");
    }

    return 0;
}