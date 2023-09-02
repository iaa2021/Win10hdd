#include "config.h"
#include "stdio.h"
#include <math.h>
int perfect( int );
int main()
{ 
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf( "\nExersise 5.26 perfect numbers:\n" );
    for (int i = 2; i < 1000; i++)
    {
        if( perfect( i ) != 0 )
        printf( "%d, ", i );
    }
    
    printf( "\n" );
    return 0;
}
int perfect( int number )
{
    int sum = 0;
    for (int i = 1; i <= number / 2; i++)
    {
        if( number % i == 0 )
        sum += i;
    }
    if( sum == number )
    return number;
    else
    return 0;
}