#include "config.h"
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
int main()
{ 
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf( "\nExersise 9.8.\n" );
    int x, y;
    printf( "Input 2 integers:" );
    scanf( "%i%d", &x, &y );
    printf( "%d, %d\n", x, y );
    printf( "\nExersise 9.9.\n" );
    int *ptr;
    printf( "%p", &x );
    printf( "%o\n", x );
    printf( "\n" );
    return 0;
}