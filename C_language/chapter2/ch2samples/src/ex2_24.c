#include "config.h"
#include "stdio.h"
/*condition's sample*/
main()
{ 
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf("\nExersize 2.24, even numbers.\n");
    int a, b;
    printf( "Input 2 integers: " );
    scanf( "%d%d", &a, &b );
    if( a % 2 == 0 )
    printf( "\n%d is even number", a );
    else
    printf( "\n%d is odd number", a );
    if( b % 2 == 0 )
    printf( "\n%d is even number", b );
    else
    printf( "\n%d is odd number", b );
    if( a % b == 0 || b % a == 0 )
    printf( "\n%d and %d are multiply numbers ", a, b );
    else
    printf( "\n%d and %d are not multiply numbers ", a, b );
    printf( "\nIntegers %d and %d is according to letters A, B.\n", 'A', 'B' );
    return 0;
}