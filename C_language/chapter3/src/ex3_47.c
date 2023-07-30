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