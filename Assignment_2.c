#include <stdio.h>

int main()
{
    int correctPin = 1234;
    int enteredPin;
    int attempts = 0;

    while (attempts < 3)
    {
        printf("Enter your ATM PIN: ");
        scanf("%d", &enteredPin);

        if (enteredPin == correctPin)
        {
            printf("Access Granted\n");
            return 0;
        }
        else
        {
            printf("Wrong PIN\n");
            attempts++;
        }
    }

    printf("Card Blocked (Too many wrong attempts)\n");

    return 0;
}
