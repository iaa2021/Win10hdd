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
    printf( "\nExersise 8.15, strtok function:\n" );
    char text[ SIZE ];
    printf( "\nInput text:\n" );
    fgets( text, SIZE, stdin );
    const char delims[] = ", ./-!?";
    char *token = strtok( text, delims );
    while (token != NULL)
    {
        for (size_t i = strlen(token); i >= 0? i--: i;)
        {
            printf( "%c", token[ i ] );
        }
        printf( " " );
        token = strtok( NULL, delims );
    }
    printf( "\n" );
    return 0;
}