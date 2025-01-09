#include "config.h"
#include "stdio.h"
/*condition's sample*/
int main()
{ 
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf("\nExersize 3.44.Triangle's sides.\n");
    int a, b, c, max = 0;
    printf( "\nInput triangle's sides, a, b, c:\n" );
    scanf( "%d%d%d", &a, &b, &c );
    max = a;
    if( a < b )
    max = b;
    if( a < c )
    max = c;
    if( a + b + c - max > max )
    printf( "\n%d and %d and %d can be the sides of triangle.\n", a, b, c );
    else
    printf( "\n%d and %d and %d can not be the sides of triangle.\n", a, b, c );
    printf("\nExersize 3.44.Right triangle's sides.\n");
    if( a == max )
    {
        if( a * a == b * b + c * c )
        printf( "\n%d and %d and %d are sides of right triangle.\n", a, b, c );
        else
        printf( "\n%d and %d and %d are not sides of right triangle.\n", a, b, c );
    }
    else if( b == max )
    {
        if( b * b == a * a + c * c )
        printf( "\n%d and %d and %d are sides of right triangle.\n", a, b, c );
        else
        printf( "\n%d and %d and %d are not sides of right triangle.\n", a, b, c );
    }
    else
    {
        if( c * c == b * b + a * a )
        printf( "\n%d and %d and %d are sides of right triangle.\n", a, b, c );
        else
        printf( "\n%d and %d and %d are not sides of right triangle.\n", a, b, c );
    }
    printf( "\n" );
    return 0;
}