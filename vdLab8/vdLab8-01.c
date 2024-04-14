//
// Created by Admin on 13/4/24.
//

#include <stdio.h>

int vdLab8_01(){
//int main(){
    float com = 0, sales_amt;
    printf("Enter the sales amount:");
    scanf("%f", &sales_amt);
    if(sales_amt >=10000){
        com = sales_amt * 0.1;
        printf("\nCommission = %0.1f $", com);
    }
    return 0;
}