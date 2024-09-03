#include <stdio.h>

// Function 
int sum(int, int);
int sub(int, int);
int mul(int, int);
float div(int, int);
int mod(int, int);

int main() 
{
    char isRunning = 'y'; 
    int choice, num1, num2;

    while (isRunning != 'x' && isRunning != 'X') // Loop for user chooses to exit
    {
        // Display menu
        printf("Welcome...\n");
        printf("----------------------------\n");
        printf("Select operation from below\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Modulo\n");
        printf("----------------------------\n");

        // get choice value from user
        printf("Enter your choice here: ");
        scanf("%d", &choice);

        // get num from user
        printf("Enter first number: ");
        scanf("%d", &num1);
        printf("Enter second number: ");
        scanf("%d", &num2);

        // selected operation
        switch (choice)
        {
        case 1:
            printf("----------------------------\n");
            printf("Addition of %d and %d is: %d\n", num1, num2, sum(num1, num2));
            break;
        case 2:
            printf("----------------------------\n");
            printf("Subtraction of %d and %d is: %d\n", num1, num2, sub(num1, num2));
            break;
        case 3:
            printf("----------------------------\n");
            printf("Multiplication of %d and %d is: %d\n", num1, num2, mul(num1, num2));
            break;
        case 4:
            if (num2 != 0)
            {
                printf("----------------------------\n");
                printf("Division of %d and %d is: %.2f\n", num1, num2, div(num1, num2));
            }
            else
            {
                printf("----------------------------\n");
                printf("Error: Division by zero  not allowed.\n");
            }
            break;
        case 5:
            if (num2 != 0) 
            {
                printf("----------------------------\n");
                printf("Modulo of %d and %d is: %d\n", num1, num2, mod(num1, num2));
            }
            else
            {
                printf("----------------------------\n");
                printf("Error: Modulo by zero not allowed.\n");
            }
            break;
        default:
            printf("----------------------------\n");
            printf("Wrong input...\n");
            break;
        }

        // Prompt for continue and exit
        printf("----------------------------\n");
        printf("Do you continue? ");
        printf("Press 'x' or 'X' for exit, or continue press any key: ");
        scanf(" %c", &isRunning);

        if (isRunning == 'x' || isRunning == 'X')
        {
            printf("Thanks for visiting...\n");
        }
    }

    return 0; 
}

// Function definitions
int sum(int num1, int num2)
{
    return num1 + num2;
}

int sub(int num1, int num2)
{
    return num1 - num2;
}

int mul(int num1, int num2)
{
    return num1 * num2;
}

float div(int num1, int num2)
{
    return (float)num1 / num2;
}

int mod(int num1, int num2)
{
    return num1 % num2;
}
