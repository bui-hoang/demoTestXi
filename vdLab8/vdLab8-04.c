//
// Created by Admin on 13/4/24.
//

#include <stdio.h>


void vdLab8_04(){
//void main() {
    float com = 0, sales_amt;
    char grade;
    printf("Enter the sales amount:");
    scanf("%f", &sales_amt);
    printf("Enter the grade:");
    scanf("%c", &grade);
    if(sales_amt > 10000){
        if (grade = 'A'){
            com = sales_amt * 0.1;
        } else {
            com = sales_amt * 0.08;
        }
    } else{
        com = sales_amt * 0.05;
        printf("Commission = %f", com);
    }
    return;
}