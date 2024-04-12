//
// Created by Admin on 12/4/24.
//
#include <stdio.h>
int vdLab5() {
//int main() {
    char c,h;
    printf("Please enter a cheracter:");
    scanf("%c", &c);
    if(c >= 'A' && c <= 'Z') {  // a = 97, A = 65
        printf("lowercase character = %c\n", c + 'a' - 'A');  // lowercase character Chuyển từ chũ in hoa sang chứ thường
        printf("lowercase character = %d\n", c + 'a' - 'A');
    }if (c >= 'a' &&  h <= 'z') {
        printf("lowercase character = %c\n", c - 'a' + 'A');
        printf("lowercase character = %d\n", c - 'a' + 'A');
    }else {
        printf("Charecter entered is = %c", c);
    }

    return 0;
}
