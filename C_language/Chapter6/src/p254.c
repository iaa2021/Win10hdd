#include "config.h"
#include "stdio.h"
#include "string.h"
#define SIZE 10
int main()
{ 
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf( "\nExersise on page 254:\n" );
    int array[ SIZE ];
    for (int i = 0; i < SIZE; i++)
    {
        array[ i ] = (i + 1) * 3;
        printf( "%d, ", array[ i ] ); 
    }
    printf( "\n" );
    char *text = "hello";
    printf( "\nText is:\n" );
    puts( text );
    printf( "\nText size = %zu", strlen( text ) );
    printf( "\n" );
    return 0;
}