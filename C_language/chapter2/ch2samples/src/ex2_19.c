#include "config.h"
#include "stdio.h"
/*condition's sample*/
main()
{ 
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf("\nExersize 2.19.\n");
    int a, b, c, value = 0;
    printf( "Input 3 different integers:\n" );
    scanf( "%d%d%d", &a, &b, &c );/*input and read 3 integers*/
    printf( "\nSum is %d", a + b + c );
    printf( "\nAverage is %d", ( a + b + c ) / 3 );
    printf( "\nProduct is %d", a * b * c );
    ( a < b ? (value = a) : (value = b) );
    if( c < value )
    value = c;
    printf( "\nSmallest is %d", value );
    ( a > b ? (value = a) : (value = b) );
    if( c > value )
    value = c;
    printf( "\nLargest is %d ", value );
    printf( "\n" );
    return 0;
}