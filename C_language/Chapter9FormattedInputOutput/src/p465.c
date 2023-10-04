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
    unsigned number;
    printf( "\nInput number: " );
    scanf( "%u", &number );
    displayBits( number );
    printf( "\n" );
    return 0;
}
void displayBits( unsigned value )
{
    unsigned c, Mask = 1 << 31;
    for (c = 1; c <= 31; c++)
    {
        putchar( value & Mask? '1' : '0' );
        value <<= 1;
        if( c % 8 == 0 )
        putchar( ' ' );
    }
}