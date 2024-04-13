//
// Created by Admin on 12/4/24.
//

#include <stdio.h>

int vd06(){
//int main() {
    // Khai báo biến cân nặng và chiều cao
    float weght, height;
    // Nhập cần nặng và chiều cao từ người dùng
    printf("Nhập cân nặng (kg):");
    scanf("%d", &weght);
    printf("Nhập chiều cao (m):");
    scanf("%d", &height);
    // Tính chỉ số BMI
    float bmi = weght / (height * height);
    // In chỉ số BMI
    printf("Chỉ số BMI của bạn là: %2f\n", bmi);
    // Xác định tình trạng sức khoẻ
    if(bmi < 18.5){
        printf("Bạn dang ở tong tình trạng gầy.\n");
    } else if(bmi < 24.9){
        printf("Bạn đang ở trong tiinhhf trạng biinhf thường.\n");
    } else if(bmi < 29.9){
        printf("Bạn đang ở trong tình trạng thừa cân.\n");
    } else{
        printf("Bạn đang ở trong tình trạng béo phì.\n");
    }
    return 0;
}