#include "config.h"
#include "stdio.h"

/*condition's sample*/
main()
{ 
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    int a, b = 10000;
    printf("\nExersize 2.30.Input five-digit number: ");
    scanf( "%d", &a );
    printf( "\nPrint %d using cycle for:\n" );
    for ( int i = 5; i >= 1; i-- )
    {
        printf( "%d   ", a / b );
        a %= b;
        b /= 10;
    }
    printf("\nExersize 2.31.Output of squares and cubes:\n");
    printf( "Number   Square   Cube\n" );
    for (int i = 1; i < 11; i++)
    {
        printf( "%d         %d          %d", i, i*i, i*i*i );
        printf( "\n" );
    }
    
    printf("\n");
    return 0;
}