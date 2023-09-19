#include "config.h"
#include "stdio.h"
#include "string.h"
#define SIZE 80 
#define SIZE1 40
int main()
{ 
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf( "\nExersise 8.38, numbers via words:\n" );
    char *array[3][9] = {
        { "one", "two", "three", "four", "five", "six", "seven", \
        "eight", "nine" },
        { "eleven", "twelve", "thirteen", "forteen", "fifteen", \
            "sixteen", "seventeen", "eighteen", "nineteen"},
        { "ten","twenty", "thirty", "forty", "fifty", "sixty", \
        "seventy", "eighty", "ninety" }
    };
    int number, j;
    printf( "\nInput number:\n" );
    scanf( "%d", &number );
    int numbers[] = { 1000000, 1000, 100, 10 };
    char *ranks[] = {"million", "thousand", "hundreed", "ten"};
    for (size_t i = 0; i < 4; i++)
    {
        if( number / numbers[i] > 0 )
            printf( "%s of %s ", array[number / numbers[i]], ranks[i] );

        number %= numbers[i];
    }
    
    printf( "\n" );
    return 0;
}