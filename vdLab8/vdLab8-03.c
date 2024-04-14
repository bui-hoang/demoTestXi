//
// Created by Admin on 13/4/24.
//

#include <stdio.h>

int vdLab8_03(){
//int main(){
    int num1, num2;
    printf("Please enter num1:\n");
    scanf("%d", &num1);
    printf("Please enter num2:\n");
    scanf("%d", &num2);
    if(num1 == num2){
        printf("The number are equal.");
    }else if(num1 < num2){
        printf("The larger number is: %d", num2);
    } else {
        printf("The larger number is: %d", num1);
    }
    return 0;
}
