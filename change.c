#include <stdio.h>

int main(void) {
    int cents;
    char repeat;

    do {
        do {
            printf("\n How much change is owed?\n");
            printf(" Please enter the amount in cents (0 to 99).\n");
            printf("   For example, enter 41 for $0.41: ");
            scanf("%d", &cents);

            if (cents < 0 || cents > 99) {
                printf("  That’s not a valid amount. Please try again.\n");
            }
        } while (cents < 0 || cents > 99);

        int quarters = cents / 25;
        cents %= 25;

        int dimes = cents / 10;
        cents %= 10;

        int nickels = cents / 5;
        cents %= 5;

        int pennies = cents;

        int total_coins = quarters + dimes + nickels + pennies;

        printf("\n Here's your change breakdown:\n");
        printf("   Quarters: %d\n", quarters);
        printf("   Dimes:    %d\n", dimes);
        printf("   Nickels:  %d\n", nickels);
        printf("   Pennies:  %d\n", pennies);
        printf("   -----------------\n");
        printf("   Total coins: %d\n", total_coins);

        printf("\n🔁 Would you like to calculate another amount? (y/n): ");
        scanf(" %c", &repeat);

    } while (repeat == 'y' || repeat == 'Y');

    printf("\n All done. Have a great day!\n");

    return 0;
}