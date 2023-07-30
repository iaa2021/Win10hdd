#include "config.h"
#include "stdio.h"
int factorial( int );
/*factorial's sample*/
int main()
{ 
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf("\nExersize 3.47.Factorial.\n");
    int number;
    printf( "\nInput value for factorial's calculation: " );
    scanf( "%d", &number );
    printf( "\nFactorial of %d = %d", number, factorial( number ) );
    printf( "\nCalculation of e constant." );
    printf( "\nInput value for e constant's calculation precision: " );
    scanf( "%d", &number );
    double e = 1;
    for (int i = 1; i <= number; i++)
    {
        e += ( double ) 1 / factorial( i );
    }
    printf( "\ne constant = %.2lf", e );
    printf( "\n" );
    return 0;
}
int factorial( int value )
{
    if( value == 1 || value == 0 )
    return 1;
    else
    return value * factorial( value - 1 );
}