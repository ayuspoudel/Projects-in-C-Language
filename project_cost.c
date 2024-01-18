#include <stdio.h>
#include <stdlib.h>

int hoursvalidator(int hours);
int packagevalidator(int pkgselection);
int guestsvalidator(int pkgselection, int guests);
int package1(int pkgselection, int hours, int guests);
int package2(int pkgselection, int hours, int guests);
int package3(int pkgselection, int hours, int guests);
int packageretriever(int pkgselection, int hours, int guests);

int main() {
    int pkgselection;
    int hours;
    int guests;
    int charge;

    printf("Please select from three packages: 1, 2, and 3\n");
    printf("Enter package selection:");
    scanf("%d", &pkgselection);

    if (packagevalidator(pkgselection)) {
        printf("Invalid selection.\n");
        exit(0);
    }

    printf("Enter hours:");
    scanf("%d", &hours);

    if (hoursvalidator(hours)) {
        printf("Invalid hours.\n");
        exit(0);
    }

    printf("Enter the number of guests: ");
    scanf("%d", &guests);

    if (guestsvalidator(pkgselection, guests)) {
        printf("Invalid number of guests.\n");
        exit(0);
    }

    charge = packageretriever(pkgselection, hours, guests);
    printf("Charge($): %d\n", charge);

    return 0;
}

int packagevalidator(int pkgselection) {
    return !(pkgselection >= 1 && pkgselection <= 3);
}

int hoursvalidator(int hours) {
    return !(hours >= 1 && hours <= 4);
}

int guestsvalidator(int pkgselection, int guests) {
    if (pkgselection == 1) {
        return !(guests >= 5 && guests <= 20);
    } 
    else if (pkgselection == 2) {
        return !(guests >= 8 && guests <= 30);
    }
    else {
        return !(guests >= 10 && guests <= 40);
    }
}

int package1(int pkgselection, int hours, int guests) {
    int charge = 150 + 100 * (hours - 1) + 25 * guests;
    return (charge < 595) ? charge : 595;
}

int package2(int pkgselection, int hours, int guests) {
    int charge = 180 + 120 * (hours - 1) + 22 * guests;
    return (charge < 850) ? charge : 850;
}

int package3(int pkgselection, int hours, int guests) {
    int charge = 200 + 120 * (hours - 1) + 20 * guests;
    return (charge < 1050) ? charge : 1050;
}

int packageretriever(int pkgselection, int hours, int guests) {
    if (pkgselection == 1) {
        return package1(pkgselection, hours, guests);
    } else if (pkgselection == 2) {
        return package2(pkgselection, hours, guests);
    } else {
        return package3(pkgselection, hours, guests);
    }
}
