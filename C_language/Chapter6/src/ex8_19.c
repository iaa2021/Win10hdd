#include "config.h"
#include "stdio.h"
#include "string.h"
#include "stdlib.h"
#include "ctype.h"
#define SIZE 80 
#define SIZE1 40
int main()
{ 
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf( "\nExersise 8.19, strchr function with alphabet:\n" );
    char *alphabet = "abcdefghijklmnopqrstuvwxyz";
    int sz = (int)strlen( alphabet );
    printf( "alphabet's size = %d", sz );
    int *array = (int *)malloc( sz * sizeof( int ) );
    if( array == 0 )
    printf( "\nMemory allocation failed." );
    for (int i = 0; i < sz; i++)
    array[ i ] = 0;
    char text[SIZE];
    printf( "\nInput text:\n" );
    fgets( text, SIZE, stdin );
    for (int i = 0; i < (int)strlen(text); i++)
    {
        for (int j = 0; j < sz; j++)
        {
            if( text[i] == alphabet[j] )
            array[ j ]++;
        }
    }
    printf( "\nLetter frequency it text is:\n" );
    for (int i = 0; i < sz; i++)
    {
        printf( "'%c' = %d, ", alphabet[ i ], array[ i ] );
        if( ( i + 1 ) % 10 == 0 )
        printf( "\n" );
    }
    
    printf( "\n" );
    return 0;
}