//
// Created by Admin on 10/4/24.
//

#include <stdio.h>
int vd01(){
//int main(){
    float r,c,s;
    printf("Bán kính của hình tròn là: r =");
    scanf("%f", &r);
    c = 6.28 * r; // 2*pi*r
    s = 3.14 * r * r; // pi * r bình phương
    printf("\n");
    printf("Kết quả tính chu vi diện tích hình tròn:\n");
    printf("========================================================\n");
    printf("Bán kính hình tròn là:          r=%8.1f met\n", r);
    printf("Chu vi hình tròn là:         c=%8.2 met\n", c);
    printf("Diện tích hình tròn là:         s=%8.2f met vuông\n", s);
    printf("========================================================\n\n");
    //========= Ví dụ 2 =========
    printf("Data type     \t | Size of byte\n");
    printf("int           \t | %d byte\n",sizeof(int));
    printf("float         \t | %d byte\n",sizeof(float));
    printf("unsigned int  \t | %d byte\n",sizeof(unsigned int));
    printf("short int     \t | %d byte\n",sizeof(short int));
    printf("long int      \t | %d byte\n",sizeof(long int));
    printf("double        \t | %d byte\n", sizeof(double));
    return 1;
}