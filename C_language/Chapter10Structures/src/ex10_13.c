#include "config.h"
#include "stdio.h"
void displayBits( unsigned );
unsigned packCharacters( unsigned, unsigned );
void unpackCharacters( unsigned );
int main()
{
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf( "\nExersise 10.13, pack characters.\n" );
    printf( "Size of unsigned = %zu", sizeof(unsigned) );
    unsigned value, value1, value2;
    printf( "\nInput 2 integers: " );
    scanf( "%u%u", &value, &value1 );
    printf( "\n" ); displayBits(value);
    printf( "\n" ); displayBits(value1);
    printf( "\nPacked numbers yelds: %d", packCharacters( value, value1 ) );
    printf( "\nInput value for unpack: " );
    scanf( "%u", &value2 );
    displayBits(value2);
    unpackCharacters( value2 );
    printf( "\n" );
    return 0;
}
unsigned packCharacters( unsigned number, unsigned number1 )
{
    unsigned number2 = number << 8;
    number2 |= number1;
    return number2;
}
void unpackCharacters( unsigned number )
{
    unsigned value = number >> 8;
    unsigned value1 = number << 24;
    value1 >>= 24;
    printf( "\nValue %u contains %u and %u\n", number, value, value1 );
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