#include "config.h"
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
int myPow( int, int );
int main()
{ 
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf( "\nExersise 5.37 recursive pow():\n" );
    int a, b;
    printf( "\nInput base and exponent:\n" );
    scanf( "%d%d", &a, &b );
    printf( "\n %d in pow %d = %d\n", a, b, myPow( a, b ) );
    printf( "\n" );
}
int myPow( int base, int exp )
{
    if( exp == 0 )
    return 1;
    if( exp == 1 )
    return base;
    else
    return base * myPow( base, exp - 1 );
}