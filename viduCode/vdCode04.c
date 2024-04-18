//
// Created by Admin on 17/4/24.
//

// Tính giá tiền khi oder các loại đồ uống.
#include <stdio.h>

#define COFFEE_PRICE 2.5
#define TEA_PRICE 2.0
#define SMOOTHIE_PRICE 3.0

int vdCode04() {
//int main() {
    int numCoffees = 0, numTeas = 0, numSmoothies = 0;
    float totalCost;
    char choice;

    printf("Welconme to coffee shop!\n");

    do {
        printf("-------- Menu --------\n");
        printf("1: Coffee ($%.2f)\n", COFFEE_PRICE);
        printf("2: tea ($%.2f)\n", TEA_PRICE);
        printf("3: Smoothie ($%.2f)\n", SMOOTHIE_PRICE);
        printf("4: Quit\n");

        printf("Enter you choice ( 1 --> 4):\n");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                numCoffees++;
                break;
            case 2:
                numTeas++;
                break;
            case 3:
                numSmoothies++;
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    // Calculate the total cost ( Tính tổng chi phí )
    totalCost = (numCoffees * COFFEE_PRICE) + (numTeas * TEA_PRICE) + (numSmoothies * SMOOTHIE_PRICE);

    // Display the oder details and total cost ( Hiển thị chi tiết đơn hàng và tổng chi phí )
    printf("Oder details:\n");
    printf("Coffees: %d\n", numCoffees);
    printf("Teas: %d\n", numTeas);
    printf("Smoothies: %d\n", numSmoothies);
    printf("Total cost: $%.2f\n", totalCost);

    printf("Thank you for your order! Enjoy your drinks!\n");
    return 0;
}
