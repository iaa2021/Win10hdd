#include "config.h"
#include "stdio.h"
#include "ctype.h"
#include "stdlib.h"
#include "string.h"
#define SIZE 100
int main()
{ 
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf( "\nExersise 8.1:\n" );
    char c = 'a'; int x, y, z; char *ptr = "1234567";
    double d;
    char s1[SIZE], s2[SIZE];
    c = toupper( c );
    printf( "c = '%c'", c );
    printf( "%s%s", "\nVariable c ", \
    ( isdigit( c )? " is digit.\n": "is not digit.\n" ) );
    printf( "\nConverting char* into integer.\n" );
    x = atoi( ptr );
    printf ( "\nx = %d", x );
    printf( "\nConverting char* into double.\n" );
    d = atof( ptr );
    printf ( "\nd = %.2lf\n", d );
    printf( "Using puts and gets, enter text in s1.\n" );
    fgets( s1, SIZE, stdin );
    printf( "Text is:\n" );
    puts( s1 );
    printf( "\nSeeking last occurense of symbol o in string\
    via strrchr function:\n" );
    puts( s1 );
    c = 'o';
    char *result = strrchr( s1, c );
    if( result != 0 )
    printf( "\nFound last occurense of\
    '%c' at position %ld\n", c, result - s1 );
    else
    printf( "\n'%c' not found.", c );
    printf( "\n" );
    return 0;
}