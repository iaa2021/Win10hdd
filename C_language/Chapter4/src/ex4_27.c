#include "config.h"
#include "stdio.h"
#include "math.h"
double myPow( double, int );
int main()
{ 
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf("\nExersize 4.27, pifagor's triples.\n");
    /*pow(i,2) + pow(j,2) = pow(k,2)*/
    for (int i = 1; i <= 500; i++)
    {
        for (int j = 1; j <= 500; j++)
        {
            for (int k = 1; k <= 500; k++)
            {
                if( myPow(i, 2) + myPow(j, 2) == myPow(k, 2) )
                printf( "%d, %d, %d\n", i, j, k );
            }
        }
    }
    printf( "\n" );
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