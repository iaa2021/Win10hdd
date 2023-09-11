#include "config.h"
#include "stdio.h"
#include "string.h"
void reverse( char * );
void recReverse( char * );
int main()
{ 
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf( "\nExersise on page 383, putchar and gets:\n" );
    char sentence [ 80 ];
    printf( "Enter a line of text:\n" );
    fgets( sentence, sizeof( sentence ), stdin );
    reverse( sentence );
    printf(  "\n& via recursion function: " );
    recReverse( sentence );
    printf( "\nExersise on page 384, getchar and puts:\n" );
    puts( sentence );
    puts( "\nInput new text:\n " );
    char c; int i = 0;
    while ((c = getchar()) != '\n')
    {
        sentence[ i++ ] = c;
    }
    sentence[ i ] = '\0';
    puts( sentence );
    printf( "\nUsing sprintf:\n" );
    int x; float y; char s[ 80 ];
    printf( "\nInput integer & float: " );
    scanf( "%d%f", &x, &y );
    sprintf( s, "Integer:%6d\nFloat:%8.2f", x, y );
    printf( "%s\n%s\n", "\nFormatted output, stored in array is: ", s );
    return 0;
}
void reverse( char *s )
{
    size_t a = strlen( s );
    printf( "%zu", a );
    for (size_t i = a; i > 0 ? i-- : i; )
    {
        printf( "%c, ", s[ i ] );
    }
    printf( "\n" );
}
void recReverse( char * s )
{
    if( s[ 0 ] == '\0' )
    return;
    else
    {recReverse( &s[ 1 ] );
    putchar( s[ 0 ] );}
}