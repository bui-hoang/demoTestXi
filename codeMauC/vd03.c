//
// Created by Admin on 11/4/24.
//
#include <stdio.h>
int vd03(){
//int main(){
    int a = 5;
    int b = 10;
    int c = 7;

    printf("a =");
    scanf("%d", &a);
    printf("b =");
    scanf("%d", &b);
    printf("c = ");
    scanf("%d", &c);
    // Tổng hợp tất cả các loại toán tử
    printf("Biểu thức ví dụ là: a + b > c && a != b\n");
    printf("Kết quả biểu thức là (%d + %d > %d && %d != %d)\n", a,b,c,a,b);
    int ketqua = a + b > c && a!= b;
    printf("Kết qua: %d\n", ketqua);

    printf("Biểu thức ví dụ là: a + b > c || a != b\n");
    printf("Kết quả biểu thức (%d + %d > %d || %d != %d)\n", a,b,c,a,b);
    int ketqua2 = a + b > c || a != b;
    printf("Kết quả: %d\n", ketqua2);
    return 0;
}
