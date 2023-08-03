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
    printf("\nExersize 4.15, complicate's persent's calculation.\n");
    /*S = P*pow((1+ i), n)*/
    double sum; int years;
    printf( "\nInput years and sum to calculate interest: " );
    scanf( "%d%lf", &years, &sum );
    for (int i = 5; i <= 10; i++)
    {
        double rate = (double)i / 100;
        printf( "\nInterest rate = %dpersents per year\n", i );
        printf( "\nInitial sum total sum  years interest\n" );
        for (int j = 1; j <= years; j++)
        {
            double tSum = (double)sum * pow(( 1 + rate ), j );
            printf( "%-11.2lf$ %-9.2lf$ %-5d %-8.2lf$\n", sum, tSum , j, tSum - sum );
        }
    }
    
    return 0;
}