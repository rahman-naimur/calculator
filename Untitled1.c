// A simple calculator in C programming

#include <stdio.h>
#include <stdlib.h>

// Function prototypes
double add(double x, double y); // Add two numbers
double subtract(double x, double y); // Subtract two numbers
double multiply(double x, double y); // Multiply two numbers
double divide(double x, double y); // Divide two numbers
void display_menu(); // Display the menu options
char get_choice(); // Get the user's choice
double get_input(); // Get the user's input

// The main function
int main()
{
    char choice; // The user's choice
    double x, y, result; // The input and output values

    // Loop until the user quits
    do
    {
        // Display the menu and get the choice
        display_menu();
        choice = get_choice();

        // Perform the calculation based on the choice
        switch (choice)
        {
        case 'A': // Addition
            printf("Enter the first number: ");
            x = get_input();
            printf("Enter the second number: ");
            y = get_input();
            result = add(x, y);
            printf("%.2f + %.2f = %.2f\n", x, y, result);
            break;
        case 'S': // Subtraction
            printf("Enter the first number: ");
            x = get_input();
            printf("Enter the second number: ");
            y = get_input();
            result = subtract(x, y);
            printf("%.2f - %.2f = %.2f\n", x, y, result);
            break;
        case 'M': // Multiplication
            printf("Enter the first number: ");
            x = get_input();
            printf("Enter the second number: ");
            y = get_input();
            result = multiply(x, y);
            printf("%.2f * %.2f = %.2f\n", x, y, result);
            break;
        case 'D': // Division
            printf("Enter the first number: ");
            x = get_input();
            printf("Enter the second number: ");
            y = get_input();
            // Check if the second number is zero
            if (y == 0)
            {
                printf("Error! Cannot divide by zero.\n");
            }
            else
            {
                result = divide(x, y);
                printf("%.2f / %.2f = %.2f\n", x, y, result);
            }
            break;
        case 'Q': // Quit
            printf("Thank you for using the calculator. Goodbye!\n");
            break;
        default: // Invalid choice
            printf("Invalid choice. Please try again.\n");
        }

        // Pause the program and clear the screen
        system("pause");
        system("cls");

    } while (choice != 'Q');

    return 0;
}

// Function to add two numbers
double add(double x, double y)
{
    return x + y;
}

// Function to subtract two numbers
double subtract(double x, double y)
{
    return x - y;
}

// Function to multiply two numbers
double multiply(double x, double y)
{
    return x * y;
}

// Function to divide two numbers
double divide(double x, double y)
{
    return x / y;
}

// Function to display the menu options
void display_menu()
{
    printf("Welcome to the calculator program.\n");
    printf("Please choose one of the following options:\n");
    printf("A - Add two numbers\n");
    printf("S - Subtract two numbers\n");
    printf("M - Multiply two numbers\n");
    printf("D - Divide two numbers\n");
    printf("Q - Quit the program\n");
}

// Function to get the user's choice
char get_choice()
{
    char choice;

    printf("Enter your choice: ");
    scanf(" %c", &choice);

    // Convert the choice to uppercase
    choice = toupper(choice);

    return choice;
}

// Function to get the user's input
double get_input()
{
    double input;

    scanf("%lf", &input);

    return input;
}
