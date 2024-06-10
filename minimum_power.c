#include <stdio.h>
#include <stdlib.h>

/*
-Acquire user input as int
-If input is positive:
    Print the smallest power of 2 greater than or equal to the number
-If input is negative
    Do nothing
-Repeat until user enter -1
*/

int main ()
{
    //Initialize Variable for User Input
    int input, result;
    //Do while loop to receive input to exit or continue
    do
    {
        printf("Enter a number (-1 to exit): ");
        scanf("%d", &input);
        //Test for positive integer
        if (input >= 0)
        {
            result = 1;
            //While loop to set result to be greater than input
            while (result < input)
            {
                result *= 2; //Same as result <<= 1;
            }
            //print result to console
            printf("Minimum Power of 2 greater than %d: %d\n", input, result);
        }
    //Exit condition
    } while (input != -1);

    return EXIT_SUCCESS;
}