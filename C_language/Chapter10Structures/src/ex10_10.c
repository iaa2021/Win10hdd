#include "config.h"
#include "stdio.h"
void displayBits( int );
int power2( int number, int pow );
int main()
{
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf( "\nExersise 10.10, right shift.\n" );
    printf( "Size of int = %zu", sizeof( int ) );
    int value, pow;
    printf( "\nInput an integer: " );
    scanf( "%d", &value );
    displayBits( value );
    printf( "\n%d << 4 = \n", value );
    displayBits( value << 4 );
    printf( "\nExersise 10.12, power of 2 via left shift.\n" );
    printf( "\nInput pow of 2 to multiplicate it on number.\n" );
    scanf( "%d", &pow );
    printf( "\n%d * 2 ^ %d = %d\n", value, pow, power2( value, pow ) );
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
int power2( int number, int pow )
{
    return number <<= pow;
}
