//
// Created by Admin on 15/4/24.
//

#include <stdio.h>
#include <math.h>
// Nhập vào 3 số nguyên. Kiểm tra xem 3 số đó có lập thành 3 cạnh của tam giác vuông hay ko? Nếu lập thành 3 cạnh tam giác vuông thì canh nào là cạnh huyền
int vdLab4_06() {
//int main() {
    int a, b, c;
    printf("Nhập cạnh a:\n");
    scanf("%d", &a);
    printf("Nhập cạnh b:\n");
    scanf("%d", &b);
    printf("Nhập cạnh c:\n");
    scanf("%d", &c);
    // Kiểm tra tam giác vuông

    // Kiểm tra tam giác vuông vs Tính cạnh huyền của 1 tam giác vuông
    if (pow(c, 2) == pow(a, 2) + pow(b, 2)) {
        printf("Ba cạnh vừa nhập là tam giác vuông có cạnh huyền là cạnh:%d", c);
    } else if(pow(a,2) == pow(b,2) + pow(c,2)) {
        printf("Ba cạnh vừa nhập là tam giác vuông có cạnh huyền là cạnh:%d!",a);
    } else if(pow(b,2) == pow(a,2) + pow(c,2)){
        printf("Ba cạnh vừa nhập là tam giác vuông có cạnh huyền là cạnh:%d!",b);
    } else{
        printf("Ba cạnh vừa nhập không phải là tam giác vuông và không có cạnh huyền!");
    }
    return 0;
}
