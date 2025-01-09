#include "config.h"
#include "stdio.h"
#include "math.h"
int factorial( int );
int revFactorial( int );
double myPow( double, int );
int main()
{ 
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf("\nExersize 4.15, complicate's persent's calculation.\n");
    /*S = P*pow((1+ i), n)*/
    double sum, total; int years;
    printf( "\nInput years and sum to calculate interest: " );
    scanf( "%d%lf", &years, &sum );
    for (int i = 5; i <= 10; i++)
    {
        double rate = (double)i / 100;
        printf( "\nrate = %d\n sum \t years \t total\n", i );
        for (int j = 1; j <= years; j++)
        {
            total = sum * myPow( ( 1 + rate ), j );
            printf( "%5.2lf$ %4d %9.2lf$\n", sum, years, total );
        }
        
    }
    printf( "\n");
    return 0;
}
double myPow( double base, int count )
{
    double total = 1;
    for (size_t i = 0; i < count; i++)
    {
        total *= base;
    }
    return total;
}