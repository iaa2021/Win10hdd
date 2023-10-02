#include "config.h"
#include "stdio.h"
#include "string.h"

int main()
{ 
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf( "\nExersise 9.12, string's length via %%n:\n" );
    char text[100]; int value;
    printf( "Input text:\n" );
    fgets( text, 100, stdin );
    printf( "%s%n", text, &value );
    printf( "\nText's length is: %d", value );
    printf( "\nExersise 9.13, farengheit into celsius:\n" );
    for (int i = 1; i <= 212; i++)
    {
        printf( "%d°F = %.2lf°C, ", i, (double)( ( i - 32 ) * 5 / 9 ) );
        if( i % 7 == 0 )
        printf( "\n" );
    }
    printf( "\n" );
    return 0;
}