#include "config.h"
#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#define SIZE 800 
#define SIZE1 40
int main()
{ 
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf( "\nExersise 8.34, word's frequensy in text:\n" );
    char text[ SIZE ]; size_t aSize = 0;
    printf( "\nInput text:\n" );
    fgets( text, SIZE, stdin );
    int array[ 10 ] = { 0 };
    char *delim = ", ./:'";
    char *token = strtok( text, delim );
    while (token != NULL)
    {
        array[ strlen( token ) - 1 ]++;
        token = strtok( NULL, delim );
    }
    
    printf( "\nWord's frequensy in text:\n" );
    for (int i = 0; i < 10; i++)
    {
        printf( "word with %d letters: %d\n", i + 1, array[i] );  
    }
    printf( "\n" );
    return 0;
}