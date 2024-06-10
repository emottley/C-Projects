#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
Goals:
    - prompt user to enter a positive integer number
    - if the number is negative, print a warning and exit
    - check if number is even or odd and store the result
      in a boolean variable using the ternary operator
    - print whether the number is even or odd
*/

int main()
{
  int number;
  printf("Enter a positive integer number: ");
  scanf("%i", &number);

  if (number < 0) {
    printf("The number is negative. Please try again.");
    return EXIT_FAILURE;
  }
  
  bool result = (number % 2) == 0 ? true : false;

  if (result == true) {
    printf("The number %i is even.", number);
  } else if (result == false) {
    printf("The number %i is odd.", number);
  }

  return EXIT_SUCCESS;
}