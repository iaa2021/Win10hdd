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
    printf( "\nExersise 8.34, word's frequensy in text:\n" );
    char text[ SIZE ]; int count = 0, j = 0;
    printf( "\nInput text:\n" );
    fgets( text, SIZE, stdin );
    char *delim = ", ./:'";
    char *token = strtok( text, delim );
    while (token != NULL)
    {
        count++;
        token = strtok( NULL, delim );
    }
    printf( "char *array's size = %d\n", count );
    char **array = ( char ** )malloc( count * sizeof( char * ) );
    for (int i = 0; i < count; i++)
    {
        char buffer[SIZE1];
        array[ i ] = ( char *)malloc( strlen( buffer ) * sizeof(char) );
    }
    
    char *token1 = strtok( text, delim );
    while (token1 != NULL)
    {
        strcpy( array[ j ], token1);
        j++;
        printf( "%s, ", array[ j ] );
        token1 = strtok( NULL, delim );
    }
    
    printf( "\n" );
    return 0;
}