#include "config.h"
#include "stdio.h"
#include "math.h"
int factorial( int );
int revFactorial( int );
int main()
{ 
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf("\nExersize 4.9, summarise of subsequense.\n");
    int count, sum = 0, number;
    printf( "\nInput subsequense's size: " );
    scanf( "%d", &count );
    for ( int i = 0; i < count; i++)
    {
        printf( "\nInput value: " );
        scanf( "%d", &number );
        sum += number;
    }
    printf( "\nSum = %d\n", sum );
    printf("\nExersize 4.11, calculating an average.\n");
    double middle; sum = 0; count = 0;
    do
    {
        printf( "\nInput value: " );
        scanf( "%d", &number );
        if( number != 999 )
        {
            sum += number;
            count++;
        }
    } while ( number != 999 );
    middle = ( double ) sum / count;
    printf( "\nSum = %d, average = %.2lf\n", sum, middle );
    printf("\nExersize 4.14, calculating a factorial.\n");
    printf( "\nInput factorial's size: " );
    scanf( "%d", &number );
    printf( "\nFactorial via factorial() = %d\n", factorial( number ) );
    printf( "\nFactorial via revFactorial() = %d\n", revFactorial( number ) );
    printf( "\n" );
    return 0;
}
int factorial( int value ){
    int sum = 1;
    for (int i = 1; i <= value; i++)
    {
        sum *= i;
    }
    return sum;
}
int revFactorial( int value ){
    if( value == 0 || value == 1 )
    return 1;
    else
    return
    value * revFactorial( value - 1 );
}
