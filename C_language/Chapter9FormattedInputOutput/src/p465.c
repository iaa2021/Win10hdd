#include "config.h"
#include "stdio.h"
void displayBits( unsigned );
int main()
{ 
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf( "\nExersise on page 465.\n" );
    printf( "\nSize of char = %zu\nunsigned = %zu\n",sizeof(char), sizeof(unsigned));
    printf( "\nint = %zu\nfloat = %zu\n", sizeof(int), sizeof(float) );
    printf("\ndouble = %zu\n", sizeof(double));
    unsigned number, number1;
    printf( "\nInput number: " );
    scanf( "%u", &number );
    displayBits( number );
    printf( "\nInput number1: " );
    scanf( "%u", &number1 );
    printf( "\n%u OR %u = ", number, number1 );
    displayBits( number|number1 );
    printf( "\n%u XOR %u = ", number, number1 );
    displayBits( number^number1 );
    printf( "\nLeft shift on 8 bits of %u = ", number );
    displayBits( number << 8 );
    printf( "\nRight shift on 8 bits of %u = ", number );
    displayBits( number >> 8 );
    printf( "\n" );
    return 0;
}
void displayBits( unsigned value )
{
    unsigned c, Mask = 1 << 31;
    printf( "\n%u = ", value );
    for (c = 1; c <= 32; c++)
    {
        putchar( value & Mask? '1' : '0' );
        value <<= 1;
        if( c % 8 == 0 )
        putchar( ' ' );
    }
}