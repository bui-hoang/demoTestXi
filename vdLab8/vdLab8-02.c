//
// Created by Admin on 13/4/24.
//

#include <stdio.h>

int vdLab8_02(){
//int main(){
    int num1, num2;
    printf("Please enter num1:\n");
    scanf("%d", &num1);
    printf("Please enter num2:\n");
    scanf("%d", &num2);
    if(num1 > num2){
        printf("The geater number is:%d", num1);
    } else{
        printf("The geater number is: %d", num2);
    }
    return 0;
}
