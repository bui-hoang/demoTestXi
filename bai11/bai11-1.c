//
// Created by Admin on 19/4/24.
//

#include <stdio.h>

int bai11_01() {
//int main(){
    int num[5];
    int i;
    num[0] = 1;
    num[1] = 3;
    num[2] = 7;
    num[3] = 9;
    num[4] = 10;
    for (i = 0; i < 5; i++) {
        printf("Number at [%d] is %d\n", i, num[i]);
    }
    return 0;
}