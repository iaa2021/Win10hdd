#include "config.h"
#include "stdio.h"
void displayBits( unsigned );
unsigned reverseBit( unsigned );
int mystery(unsigned);
int main()
{
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf( "\nExersise 10.17, reverse bits.\n" );
    unsigned number, number1;
    printf( "\nInput unsigned value:\n" );
    scanf( "%u", &number );
    displayBits(number);
    number1 = reverseBit(number);
    printf( "\nReversed value = %u\n", number1 );
    displayBits(number1);
    printf( "\nExersise 10.20, mystery program.\n" );
    unsigned x;
    printf( "\nInput number: " );
    scanf( "%u", &x );
    displayBits(x);
    printf( "\nThe result is %d\n", mystery(x) );
    printf( "\n" );
    return 0;
}
void displayBits( unsigned number )
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
unsigned reverseBit( unsigned value )
{
    unsigned value1;
    value1 = ~value;
    return value1;
}
int mystery(unsigned bits)
{
    unsigned i, mask = 1 << 15, total = 0;
    for( i = 1; i <= 16; i++, bits <<= 1)
    {
        if( (bits & mask) == mask )
        ++total;
    }
    printf( "\ntotal = %d\n", total );
    return ( total % 2 == 0 ? 1 : 0 );
}