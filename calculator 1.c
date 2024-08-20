#include <stdio.h>

int sum(int, int);
int sub(int, int);
int mul(int, int);
float div(int, int);
int mod(int, int);

void main()
{

    int isRunning = 1, choice, num1, num2;

    while (!(isRunning == 'x' || isRunning == 'X'))
    {

        printf("Welcome...");
        printf("\nSelect operation from below");
        printf("\n1. Addition");
        printf("\n2. Subtraction");
        printf("\n3. Multiplication");
        printf("\n4. Division");
        printf("\n5. Modulo");

        printf("\nEnter your choice here: ");
        scanf("%d", &choice);

        printf("Enter first number: ");
        scanf("%d", &num1);
        printf("Enter second number: ");
        scanf("%d", &num2);

        switch (choice)
        {
        case 1:
            printf("\nAddition of %d and %d is: %d", num1, num2, sum(num1, num2));
            break;
        case 2:
            printf("\nSubtraction of %d and %d is: %d", num1, num2, sub(num1, num2));
            break;
        case 3:
            printf("\nMultiplication of %d and %d is: %d", num1, num2, mul(num1, num2));
            break;
        case 4:
            printf("\nDivision of %d and %d is: %.2f", num1, num2, div(num1, num2));
            break;
        case 5:
            printf("\nModulo of %d and %d is: %d", num1, num2, mod(num1, num2));
            break;
        default:
            printf("\nWrong input...");
            break;
        }

        printf("\nDo you want to continue ? ");
        printf("\nPress x or X for exit, to continue press any other key : ");
        scanf(" %c", &isRunning);

        if (isRunning == 'x' || isRunning == 'X')
        {
            printf("Thanks for visiting...");
        }
    }
}

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