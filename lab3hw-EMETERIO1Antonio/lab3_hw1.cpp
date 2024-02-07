#include <stdio.h>

int main() {
    int arrivalHour;
    int basePrice = 1000;
    int additionalHourlyRate = 200;
    int maxTotalPrice = 2000;

    printf("Enter the military hour of your arrival (0 to 23): ");
    scanf("%d", &arrivalHour);

    if (arrivalHour >= 6 && arrivalHour <= 11) {
        char checkInChoice;

        printf("Are you checking in now? (y/n): ");
        scanf(" %c", &checkInChoice);

        if (checkInChoice == 'y' || checkInChoice == 'Y') {

            printf("You are checking in now. Your price is capped at %d pesos.\n", maxTotalPrice);
        } else {

            printf("Please wait for 12 noon for check-in.\n");
            return 0;
        }
    }

    int hoursAfterNoon = arrivalHour - 12;
    int totalPrice = basePrice + (hoursAfterNoon * additionalHourlyRate);

    totalPrice = (totalPrice > maxTotalPrice) ? maxTotalPrice : totalPrice;
    printf("Your price to pay is: %d pesos\n", totalPrice);

    return 0;
}