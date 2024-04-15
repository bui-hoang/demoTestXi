//
// Created by Admin on 15/4/24.
//

#include <stdio.h>
// Chương trình nhâp 3 số, in ra màn hình theo thứ tự tăng dần
int vdLab4_09(){
//int main() {
    int a, b, c, temp;
    printf("Nhập một số bất kì a:\n");
    scanf("%d", &a);
    printf("Nhập một số bất kì b:\n");
    scanf("%d", &b);
    printf("Nhập một số bất kì c:\n");
    scanf("%d", &c);
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    if (a > c) {
        temp = a;
        a = c;
        c = temp;
    }
    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }
    printf("Giá trị tăng dần của 3 số vừa nhập là: %d ==> %d ==> %d\n", a, b, c);
    return 0;
}