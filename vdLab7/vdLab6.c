//
// Created by Admin on 12/4/24.
//

#include <stdio.h>
int vdLab6(){
//int main() {
    int x = 0;
    printf("Enter choice (1 - 3):");
    scanf("%d", &x);
    if(x == 1) {
        printf("\nChoice is 1.");
    } else if (x == 2) {
        printf("\nChoice is 2.");
    } else if (x == 3) {
        printf("\nChoice is 3.");
    } else {
        printf("\nInvalid choice : Invalid Choice");
    }
    return 0;
}