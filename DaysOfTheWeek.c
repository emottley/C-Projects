#include <stdio.h>
#include <stdlib.h>

/*
-Declare an enum that lists all the days of the week.
-Make sure it has the value 1 on Monday
-print Monday and sunday values
-get user input and store as a day enum
-print a string with the name of the day
*/

//Create enum for days of week and setting 1 index
typedef enum 
    {
        MONDAY = 1,
        TUESDAY,
        WEDNESDAY,
        THURSDAY,
        FRIDAY,
        SATURDAY,
        SUNDAY
    } WeekDay;

int main () 
{
    //Initialize var day of enum WeekDay
    WeekDay day;
    //Initial prompt for input with example
    printf("With Monday as %i and Sunday as %i,\nselect a day you would like to print in the console: ", MONDAY, SUNDAY);
    scanf("%u", &day);
    //Switch statement to match input with correct day of the week
    switch (day)
    {
    case MONDAY:
        printf("day %d is MONDAY", day);
        break;
    case TUESDAY:
        printf("day %d is TUESDAY", day);
        break;
    case WEDNESDAY:
        printf("day %d is WEDNESDAY", day);
        break;
    case THURSDAY:
        printf("day %d is THURSDAY", day);
        break;
    case FRIDAY:
        printf("day %d is FRIDAY", day);
        break;
    case SATURDAY:
        printf("day %d is SATURDAY", day);
        break;
    case SUNDAY:
        printf("day %d is SUNDAY", day);
        break;
    //Error handling of unknown integer
    default:
    printf("day has unknown value");
        break;
    }
}