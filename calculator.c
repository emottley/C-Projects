#include <stdio.h>
#include <stdlib.h>

int main() {
    //Initialize Varibles
    char operator;
    double operand_1, operand_2, result;
    int error = 0;
    //Prompt and Assigning user input for variables
    printf("Enter an Operator: +, -, *, /: ");
    scanf("%c", &operator);
    printf("Enter the first Operand: ");
    scanf("%lf", &operand_1);
    printf("Enter the second Operand: ");
    scanf("%lf", &operand_2);
    //Switch Statement for selected operator
    switch (operator)
    {
    case '+':
        result = operand_1 + operand_2;
        //return result;
        break;
    
    case '-':
        result = operand_1 - operand_2;
        //return result;
        break;

    case '*':
        result = operand_1 * operand_2;
        //return result;
        break;

    case '/':
        result = operand_1 / operand_2;
        //return result;
        break;
    default:
        //Checking for unknown operators.
        error = 1;
        break;
    }
    //Print of result, or error of unknown operator.
    if (!error) {
        printf("The result is %lf", result);
    } else {
        printf("Unknown Operator. Please try again.");
    }
    return EXIT_SUCCESS;
}