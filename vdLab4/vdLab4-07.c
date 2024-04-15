//
// Created by Admin on 15/4/24.
//

#include <stdio.h>
//Viết chương trình nhập vào 2 số num1, num2. Kiểm tra num1, num2 có số nào là ước số của nhau hay không
int vdLab4_07() {
//int main() {
    int num1, num2;
    printf("Please enter num1:\n");
    scanf("%d", &num1);
    printf("Please enter num2:\n");
    scanf("%d", &num2);
    if(num1 % num2 == 0){
        printf("%d là ước của %d\n", num2, num1);
    } else if(num2 % num1 == 0) {
        printf("%d là ước của %d\n", num1, num2);
    } else {
        printf("%d và %d không có số nào là nước của nhau", num1, num2);
    }
    return 0;
}