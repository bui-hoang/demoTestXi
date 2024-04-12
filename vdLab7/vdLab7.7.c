//
// Created by Admin on 12/4/24.
//

#include <stdio.h>
int vdLab7(){
//int main() {
    int x = 0, y = 0;
    printf("Enter choice (1 - 3):");
    scanf("%d", &x);
    if (x == 1) {
        printf("\nEnter value for y (1 - 5):");
        scanf("%d", &y);
        if (y <= 5){
            printf("\nThe value for y is: %d", y);
        } else {
            printf("\nThe value of y exceeds 5.");
        }
    } else {
        printf("\nChoice entered was not 1");
    }
    return 0;
}
