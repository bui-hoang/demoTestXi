//
// Created by Admin on 12/4/24.
//

#include <stdio.h>
int vdLab4() {
//int main() {
    int num, res;
    printf("Enter a number:");
    scanf("%d", &num);
    res = num % 2;
    if(res == 0) {
        printf("The number is even.");
    } else {
        printf("The number is odd.");
    }
    return 0;
}