#include <cs50.h>
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("%i\n", coins);
}

int get_cents(void)
{
    // TODO
    int cents;
    do
    {
    // get user input cents owed
    cents = get_int("Cents owed: ");
    }
    // do not accept input that is less or equal to 0
    while (cents <= 0);
    return cents;
}

int calculate_quarters(int cents)
{
    //declare quarters variable
    int quarters = 0;
    // while cents are more or equal to one quarter 25
    while (cents >= 25)
    {
        // subtract 25 (1quarter) from cents
        cents = cents - 25;
        // while this happens add 1 to quarters
        quarters++;
    }
    // once false return number of quarters
    return quarters;
}

int calculate_dimes(int cents)
{
    //declare dimes variable
    int dimes = 0;
    // while cents are more or equal to one dime 10
    while (cents >= 10)
    {
        // subtract 10 (1 dime) from cents
        cents = cents - 10;
        // while this happens add 1 to dimes (counts how many dimes)
        dimes++;
    }
    // once false return number of quarters
    return dimes;
}

int calculate_nickels(int cents)
{
    //declare nickels variable
    int nickels = 0;
    // while cents are more or equal to one nickel 5
    while (cents >= 5)
    {
        // subtract 5 (1 nickle) from cents
        cents = cents - 5;
        // while this happens add 1 to nickles (counts how many nickles)
        nickels++;
    }
    // once false return number of nickles
    return nickels;
}

int calculate_pennies(int cents)
{
    //declare pennies variable
    int pennies = 0;
    // while cents are more or equal to one pennie 1
    while (cents >= 1)
    {
        // subtract 1 (1 pennie) from cents
        cents = cents - 1;
        // while this happens add 1 to pennies (counts how many pennies)
        pennies++;
    }
    // once false return number of pennies
    return pennies;
}