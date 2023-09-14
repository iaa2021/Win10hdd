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
    printf( "\nExersise 8.16, strstr function:\n" );
    char text[SIZE], search[SIZE1];
    printf( "Input text:\n" );
    fgets( text, SIZE, stdin );
    printf( "Input search line:\n" );
    fgets( search, SIZE1, stdin );
    const char *text1 = (const char *)text;
    const char *search1 = (const char *)search;
    printf( "\nConst text is: " );
    fputs( text1, stdout );
    printf( "\nConst string for search is: " );
    fputs( search1, stdout );
    char *searchPtr = strstr( text1, search1 );
    printf( "%s", searchPtr );
    printf( "\n" );
    return 0;
}