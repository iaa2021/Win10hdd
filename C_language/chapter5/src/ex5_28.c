#include "config.h"
#include "stdio.h"
#include "string.h"
int perfect( int );
int main()
{ 
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf( "\nExersise 5.26 number's reverse order:\n" );
    printf( "Input number, you'd like to get in reverse order:\n" );
    int number, count = 0;
    scanf( "%d", &number );
    while (number != 0)
    {
        number /= 10;
        count++;
    }
    printf( "\nNumber digit is: %d", count );
    char *text = (char *)malloc((count + 1) * sizeof(char));/*declaring dynamic array*/
    if (text == NULL) {
        printf("Memory allocation failed.\n");
        return 1; // Exit the program with an error code
    }
    sprintf( text, "%d", number );
    printf( "\nText is: %s", text );
    free(text);
    printf( "\n" );
    return 0;
}