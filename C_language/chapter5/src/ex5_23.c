#include "config.h"
#include "stdio.h"
#include <math.h>
#include "time.h"
double farenheit( double );
double celsius( double );
int main()
{ 
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf( "\nTime in second = %ld\n", time( 0 ) );
    time_t curTime = time( 0 );
    printf( "\nCurrent time = %s\n", ctime(&curTime) );
    printf( "\nExersize 5.24 celsius to farenheit, and undo.\n" );
    printf( "\nConvert celsius from 0 till 100 into farenheit.\n" );
    for (int i = 1; i < 100; i++)
    {
        printf( "%d = %.1lf, ", i, farenheit( (double)i ) );
        if( i % 10 == 0 )
        printf( "\n" );
    }
    printf( "\nConvert farenheit from 0 till 100 into celsius.\n" );
    for (int i = 32; i < 212; i++)
    {
        printf( "%d = %.1lf, ", i, celsius( (double)i ) );
        if( i % 10 == 0 )
        printf( "\n" );
    }
    printf( "\n" );
    return 0;
}
double farenheit( double value )
{
    return 32 + value * 1.8;
}
double celsius( double value )
{
    return ( value - 32 ) / 1.8;
}