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
    int count;
    printf( "Input range of prime numbers search:\n" );
    scanf( "%d", &count );
    for (int i = 2; i < count; i++)
    {
        if( perfect( i ) != 0 )
        {
            printf( "%d = ", i );
            for (int j = 1; j < i; j++)
            {
                if( i % j == 0  )
                {
                    printf( "%d + ", j );
                }
            }
            printf( "\n" );
        }
    }
    printf( "\nSearch complete." );
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