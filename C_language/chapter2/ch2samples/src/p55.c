#include "config.h"
#include "stdio.h"
/*first program on C*/
main()
{
    printf("Welcome to C.\nAdding 2 integers:\n");
    int a, b, sum;
    printf( "Input first integer: " );
    scanf( "%d", &a );/*cin a*/
    printf( "Input second integer: " );
    scanf( "%d", &b );/*cin b*/
    sum = a + b;
    printf( "\nSum of %d", a );
    printf( " and %d", b );
    printf ( " = %d", sum );
    printf( "\nSubtraction of %d", a );
    printf( " and %d", b );
    printf( " = %d", a - b );
    printf( "\n" );
    return 0;
}