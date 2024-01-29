#include <stdio.h>
#include <stdbool.h>

#define HERSHEYS 15
#define REESES 25
#define SNICKERS 50

int main() {
    int coins;
    int totalcoins = 0;

    // Reading coins until 0 is entered
    do {
        printf("Insert Coins: ");
        scanf("%d", &coins);
        totalcoins += coins;
    } while (coins != 0);

    printf("1 – Hershey’s kisses (15 cents), 2 – Reese’s Peanut Butter Cups (25 cents), 3 - Snickers (50 cents)\n");

    int choice;
    bool choice_valid;

    do {
        printf("Enter your choice: ");
        scanf("%d", &choice);
        choice_valid = (choice >= 1 && choice <= 3) ? true : false;

        if (!choice_valid) {
            printf("Invalid Selection, %d cents returned.\n", totalcoins);
        }
    } while (!choice_valid);

    // Calculate change based on the chosen candy
    int change;

    if (choice == 1) {
        change = totalcoins - HERSHEYS;
    } else if (choice == 2) {
        change = totalcoins - REESES;
    } else {
        change = totalcoins - SNICKERS;
    }

    // Output the change or an error message
    if (change < 0) {
        printf("Insufficient amount, %d cents returned\n", totalcoins);
    } else {
        printf("Your change is %d cents\n", change);
    }

    return 0;
}
