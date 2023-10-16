#include "config.h"
#include "stdio.h"
void displayBits( unsigned );
unsigned packCharacters( char, char, char, char );
void unpackCharacters( unsigned );
int main()
{
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf( "\nExersise 10.13, pack characters.\n" );
    printf( "Size of unsigned = %zu, size of char = %zu\n", sizeof(unsigned), \
    sizeof( char ) );
    unsigned value; char ch, ch1, ch2, ch3;
    printf( "\nInput 4 characters: " );
    scanf( "%c %c %c %c", &ch, &ch1, &ch2, &ch3 );
    printf( "\nCharacters for packing are %c, %c, %c, %c.\n", ch, ch1, ch2,\
     ch3 );
    value = packCharacters( ch, ch1, ch2, ch3 );
    printf( "\nPacked numbers yelds: %d", value );
    printf( "\nInput value for unpack: " );
    scanf( "%u", &value );
    displayBits(value);
    unpackCharacters( value );
    printf( "\n" );
    return 0;
}
unsigned packCharacters( char ch, char ch1, char ch2, char ch3 )
{
    unsigned number = 0;
    number |= ch; number <<= 8;
    number |= ch1; number <<= 8; 
    number |= ch2; number <<= 8;
    number |= ch3; 
    return number;
}
void unpackCharacters( unsigned number )
{
    unsigned number1 = number;
    char value, value1, value2, value3;
    number1 <<= 24; number1 >>= 24; value = number1;//1st bit
    number1 = number; number1 >>= 8; number1 <<= 24;
    number1 >>= 24; value1 = number1;//2nd bit
    number1 = number; number1 <<= 8; number1 >>= 24; value2 = number1;//3rd bit
    number1 = number; number1 >>= 24; value3 = number1;//4th bit
    printf( "\nValue %u contains %c, %c, %c and %c.\n", number, value, value1,\
    value2, value3 );
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