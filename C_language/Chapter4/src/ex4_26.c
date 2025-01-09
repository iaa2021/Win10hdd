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
    printf("\nExersize 4.26, pi calculation.\n");
    double pi = 4, c; int count, a = 3, b = 5;
    printf( "\nInput presision: " );
    scanf( "%d", &count );
    for (int i = 1; i <= count; i++)
    {
        if( i % 2 != 0 )
        {
            pi -= (double)4 / a;
            a += 4;
        }
        else 
        {
            pi += (double)4 / b;
            b += 4;
        }
        printf( "\npi with precision %d = %lf\n", i, pi );
    }
    
    printf( "\n" );
    return 0;
}