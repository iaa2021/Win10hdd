#include "config.h"
#include "stdio.h"
#include "string.h"
#define SIZE 80 
#define SIZE1 40
int rank( int, int );
int main()
{ 
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf( "\nExersise 8.38, numbers via words:\n" );
    char *array[3][10] = {
        { "one", "two", "three", "four", "five", "six", "seven", \
        "eight", "nine", "ten" },
        { "eleven", "twelve", "thirteen", "forteen", "fifteen", \
            "sixteen", "seventeen", "eighteen", "nineteen", "hundreed"},
        { "twenty", "thirty", "forty", "fifty", "sixty", \
        "seventy", "eighty", "ninety", "thousand", "million" }
    };
    int number, j;
    printf( "\nInput number:\n" );
    scanf( "%d", &number );
    int numbers[] = { 1000000, 1000, 100, 10 };
    
    printf( "\n" );
    return 0;
}
int rank( int number, int deleter )
{
    
    for (int i = 0; i < sizeof( numbers )/sizeof( int ); i++)
    return  number / numbers[ i ];
}