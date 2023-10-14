#include "config.h"
#include "stdio.h"
void displayBits( unsigned );
unsigned packCharacters( char, char );
void unpackCharacters( unsigned );
int main()
{
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf( "\nExersise 10.13, pack characters.\n" );
    printf( "Size of unsigned = %zu, size of char = %zu\n", sizeof(unsigned), \
    sizeof( char ) );
    unsigned value; char ch, ch1;
    printf( "\nInput 2 characters: " );
    scanf( "%c %c", &ch, &ch1 );
    /*ch = getchar(); ch1 = getchar();*/
    printf( "\nPacked numbers yelds: %d", packCharacters( ch, ch1 ) );
    printf( "\nInput value for unpack: " );
    scanf( "%u", &value );
    displayBits(value);
    unpackCharacters( value );
    printf( "\n" );
    return 0;
}
unsigned packCharacters( char ch, char ch1 )
{
    unsigned number = 0;
    number |= ch;
    number <<= 8;
    number |= ch1; 
    return number;
}
void unpackCharacters( unsigned number )
{
    unsigned number1 = number;
    char value = number1 >> 8;
    number1 <<= 24; number1 >>= 24;
    char value1 = number1;
    printf( "\nValue %u contains:", number );
    putchar( value ); printf( " and " ); putchar( value1 );
    printf( "\nValue %u contains %c and %c.\n", number, value, value1 );
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