/*Name: Ayush Poudel
UID: U43442445
The program "project1_cost.c" calculates the total charge for an event venue's packages 
based on the user's selection of package, number of hours, and number of guests. 
It validates input for package selection, hours, and guests, displaying appropriate error 
messages and exits if validation fails. The program then prints the calculated charge for the selected package.
*/
//importing input output and standard library
#include <stdio.h> 
#include <stdlib.h> 

//This section defines all the functions that will later be declared in the code
int hoursvalidator(int hours);
int packagevalidator(int pkgselection);
int guestsvalidator(int pkgselection, int guests);
int package1(int pkgselection, int hours, int guests);
int package2(int pkgselection, int hours, int guests);
int package3(int pkgselection, int hours, int guests);
int packageretriever(int pkgselection, int hours, int guests);

int main() {
    //Main function, by calling abovementioned user-defined function and if-else conditions, takes input, processess input validation, calculates charge of the event and produces output.
    //Declaring variables which will later take input and store output
    int pkgselection;
    int hours;
    int guests;
    int charge;

    //Taking input for the type of package from the user
    printf("Please select from three packages: 1, 2, and 3\n");
    printf("Enter package selection:");
    scanf("%d", &pkgselection);

    /*All the validator functions return boolean value, which when true means the 
    input should not be validated so the program exits through exit(0), displaying an error message*/

    //Calling packagevalidator to ensure the program exits if the input integer is not 1,2 or 3
    if (packagevalidator(pkgselection)) {
        printf("Invalid selection.");
        exit(0);
    }
    
    //Taking input for hours from the user
    printf("Enter hours:");
    scanf("%d", &hours);

    //Calling hoursvalidator function to ensure that the program exits if input hours are greater than 1 and less than 4.
    if (hoursvalidator(hours)) {
        printf("Invalid hours.");
        exit(0);
    }

    //Taking input for number of guests from the user
    printf("Enter the number of guests: ");
    scanf("%d", &guests);

    //Calling guestsvalidator function to ensure that the program exits if number of guests do not meet the conditions of each type of package.
    if (guestsvalidator(pkgselection, guests)) {
        printf("Invalid number of guests.");
        exit(0);
    }

    /*Packageretriever function calls the required package function, which then returns 
    the total cost after calculation within the function, which are defined below.*/
    charge = packageretriever(pkgselection, hours, guests);
    printf("Charge($):%d\n", charge);

    return 0;
}

//This function uses compound logic statement to return a true boolean value if the input is not between 1 and 3
int packagevalidator(int pkgselection) {
    return !(pkgselection >= 1 && pkgselection <= 3);
}

//This function uses compound logic statement to return a true boolean value if the input is not between 1 and 4
int hoursvalidator(int hours) {
    return !(hours >= 1 && hours <= 4);
}

//This function uses compound logic statement to return a true boolean value if the input does not meet the condition for number of guests
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

/*
These functions takes three parameters to calculate the cost of the program. Also, the maximum cost is defined as per the event, 
so it uses conditional operator to make sure if the cost is over the maximum cost, the function returns maximum cost only.
*/

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

//This function retrieves the correct function from above three, and returns the ccost of the event.
int packageretriever(int pkgselection, int hours, int guests) {
    if (pkgselection == 1) {
        return package1(pkgselection, hours, guests);
    } else if (pkgselection == 2) {
        return package2(pkgselection, hours, guests);
    } else {
        return package3(pkgselection, hours, guests);
    }
}
