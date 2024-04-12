//
// Created by Admin on 12/4/24.
//
#include <stdio.h>
int vdLab3(){
//int main() {
    int year;
     printf("Please enter a year:");
     scanf("%d", &year);
     if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
         printf("%d is a leap year!", year);
     } else  {
        printf("%d Không phải năm nhuận.", year);
     }
     // Ví dụ:
     return 0;
}
