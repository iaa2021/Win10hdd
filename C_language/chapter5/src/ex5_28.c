#include "config.h"
#include "stdio.h"
#include "string.h"
#include "math.h"
int myPow( int, int );
int main()
{ 
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf( "\nExersise 5.26 number's reverse order:\n" );
    printf( "Input number, you'd like to get in reverse order:\n" );
    int number, count = 0, number1;
    scanf( "%d", &number );
    number1 = number;
    while (number1 != 0)
    {
        number1 /= 10;
        count++;
    }
    number1 = 0;
    printf( "\nNumber digit is: %d", count );
    for (int i = count - 1, a = 0; i > 0, a < count; --i, a++)
    {
        number1 += (number / myPow( 10, i )) * myPow( 10, a );
        number %= myPow( 10, i );
        printf ( "\n i = %d, number = %d, myPow( 10, i ) = %d\n", i, number, myPow( 10, i ) );
    }
    printf( "\nReverse order is %d\n", number1 );
    return 0;
}
int myPow( int nmb, int pow )
{
    int number = 1;
    if( pow == 0 )
    return 1;
    else
    {
    for (int i = 1; i <= pow; i++)
    {
        number *= nmb;
    }
    return number;
    }
}