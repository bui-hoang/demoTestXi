//
// Created by Admin on 26/4/24.
//

#include <stdio.h>

void displayMenu();

void placeOrder(char option);

float calculateTotalCost(char option, int quantity);

//int vd13() {
int main() {
    int option;
    int quantity;

    do {
        displayMenu();
        printf("Enter your option:\n");
        scanf("%d", &option);
        if (option != 4) {
            printf("Enter the quantity:\n");
            scanf("%d", &quantity);
            placeOrder(option);
            float totalCost = calculateTotalCost(option, quantity);
            printf("Total cost: %.2f\n", totalCost);
        }
    } while (option != 4);

    return 0;
}

void displayMenu() {
    printf("----------- Coffee Shop Menu -----------\n");
    printf("1: Espresso - $2.50\n");
    printf("2: Cappuccino - $3.00\n");
    printf("3: Latte - $3.50\n");
    printf("4: Quit\n");
}

void placeOrder(char option) {
    switch (option) {
        case 1:
            printf("Placing order: Espresso\n");
            break;
        case 2:
            printf("Placing order: Cappuccino\n");
            break;
        case 3:
            printf("Placing order: Latte\n");
            break;
        default:
            printf("Invalid option. Please try again.\n");
    }
}

float calculateTotalCost(char option, int quantity) {
    float price;
    switch (option) {
        case 1:
            price = 2.50;
            break;
        case 2:
            price = 3.00;
            break;
        case 3:
            price = 3.50;
            break;
        default:
            price = 0.00;
    }
    return price * quantity;
}