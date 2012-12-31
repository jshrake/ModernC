// A program to determine the smallest number of American currency to pay a dollar ammount
// Chapter 2, Exercise 7 of K.N. King's C Programming book

#include <stdio.h>

#define HUNDRED 100
#define FIFTY 50
#define TWENTY 20
#define TEN 10
#define FIVE 5
#define ONE 1
#define QUARTER 0.25f
#define DIME 0.10f
#define NICKLE 0.05f
#define PENNY 0.01f

int main(void)
{
    float amount;
    int hundreds = 0, fifties = 0, twenties = 0, tens = 0, fives = 0, ones = 0, quarters = 0, dimes = 0, nickles = 0, pennies = 0;

    printf("Enter a dollar amount: ");
    scanf("%f", &amount);
   
    // Hundreds
    hundreds = amount / HUNDRED;
    amount = amount - hundreds * HUNDRED;

    // Fifties
    fifties = amount / FIFTY;
    amount = amount - fifties * FIFTY;

    // Twenties
    twenties = amount / TWENTY;
    amount = amount - twenties * TWENTY;

    // Tens
    tens = amount / TEN;
    amount = amount - tens * TEN;

    // Fives
    fives = amount / FIVE; 
    amount = amount - fives * FIVE;

    // Ones
    ones = amount / ONE;
    amount = amount - ones * ONE;

    // Quarters
    quarters = amount / QUARTER;
    amount = amount - quarters * QUARTER;

    // Dimes
    dimes = amount / DIME;
    amount = amount - dimes * DIME;

    // Nickles
    nickles = amount / NICKLE;
    amount = amount - nickles * NICKLE;

    // Pennies
    pennies = amount / PENNY;
    amount = amount - pennies * PENNY;

    // Print answer
    printf("--Bills--\n");
    printf("Hundreds: %d\n", hundreds);
    printf("Fifties: %d\n", fifties);
    printf("Twenties: %d\n", twenties);
    printf("Tens: %d\n", tens);
    printf("Fives: %d\n", fives);
    printf("Ones: %d\n", ones);
    printf("--Change--\n");
    printf("Quarters: %d\n", quarters);
    printf("Dimes: %d\n", dimes);
    printf("Nickles: %d\n", nickles);
    printf("Pennies: %d\n", pennies);
    
    return 0;
} 
