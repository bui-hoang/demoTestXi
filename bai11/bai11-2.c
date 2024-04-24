//
// Created by Admin on 19/4/24.
//

#include <stdio.h>

void bai11_2() {
//void main() {
    int ary[10];
    int i, total, high;
    for (i = 0; i < 10; i++) {
        printf("Enter value: %d:\n", i + 1);
        scanf("%d", &ary[i]);
    }
    // Displays highest if the enterd values
    high = ary[0];
    for (int i = 0; i < 10; ++i) {
        if(ary[i] > high){
            high = ary[i];
        }
    }
    printf("Highest value entered was %d\n", high);
    // Prints average of value entered for ary[10]
    for (i = 0, total = 0; i < 10; i++){
        total = total + ary[i];
        printf("The average of the element of ary is %d\n", total/i);
    }
}