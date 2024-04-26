//
// Created by Admin on 26/4/24.
//

#include <stdio.h>
int add(int a, int b);
int vd10() {
//int main() {
    // Gọi hàm lần thứ 1 (Giá trị có sẵn)
    int result = add(5,3);
    printf("Tổng là %d\n", result);

    // Gọi hàm lần thứ 2 (giá trị có sẵn)
    int result2 = add(3,4);
    printf("Tổng là: %d\n", result2);

    // Người dùng nhập giá trị
    int num1, num2;
    printf("Nhập số hạng thứ nhất:\n");
    scanf("%d", &num1);
    printf("Nhập số hạng thứ hai:\n");
    scanf("%d", &num2);

    // Gọi hàm lần thứ 3 (Giá trị do người dùng nhập vào)
    int result3 = add(num1,num2);
    printf("Tổng là: %d\n", result3);
    return 0;
}

int add(int a, int b) {
    printf("Thực hiện tính cộng:\n");
    printf("Số hạng a = %d\n", a);
    printf("Số hạng b = %d\n", b);
    return a + b;
}