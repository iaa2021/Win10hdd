#include "config.h"
#include "stdio.h"
void displayBits( int );
int main()
{
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf( "\nExersise 10.10, right shift.\n" );
    printf( "Size of int = %zu", sizeof( int ) );
    int value;
    printf( "\nInput an integer: " );
    scanf( "%d", &value );
    displayBits( value );
    printf( "\n%d << 4 = \n", value );
    displayBits( value << 4 );
    printf( "\n" );
    return 0;
}
void displayBits( int number )
{
    unsigned c, Mask = 1 << 31;
    printf( "%d = ", number );
    for( c = 1; c <= 32; c++ )
    {
        putchar( number & Mask ? '1' : '0' );
        number <<= 1;
        if( c % 8 == 0 )
        putchar(' ');
    }
}