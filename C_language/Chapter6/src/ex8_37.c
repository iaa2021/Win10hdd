#include "config.h"
#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#define SIZE 80 
#define SIZE1 40
int main()
{ 
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf( "\nExersise 8.37, check's protection:\n" );
    double sum; int value = 12345678; char fillV = '*', text[8];
    printf( "\nInput sum $.\u00A2\u00A2\:\n" );
    scanf( "%lf", &sum );
    sprintf( text, "%.2lf", sum );
    printf( "\nDouble as a string = %s\n", text );
    printf( "\nText's size = %zu\n", strlen( text ) );
    printf( "\nProtected sum is:\n" );
    size_t j = 8 - strlen( text ) + 1;
    if( j > 0 )
    {
        char *text1 = (char *)malloc( j * sizeof( char ) );
        for (size_t i = 0; i < j; i++)
        {
            text1[ i ] = '*';
        }
        /*text1[ j - 1 ] = '/0';*/
        printf( "%s%s", text1, text );
    }
    else
    printf( "%s\n", text );

    printf( "\n---------\n%9d", value );
    printf( "\n" );
    return 0;
}