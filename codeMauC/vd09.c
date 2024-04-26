//
// Created by Admin on 26/4/24.
//

#include <stdio.h>
int isEven(int num) {
    return num % 2 == 0;
}
int vd09() {
//int main() {
    int number = 7;
    if (isEven(number))
        printf("%d Là số chẵn.\n", number);
    else
        printf("%d Là số lẻ.\n", number);
    return 0;
}
