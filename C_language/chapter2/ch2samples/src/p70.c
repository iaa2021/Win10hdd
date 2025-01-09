#include "config.h"
#include "stdio.h"
/*condition's sample*/
main()
{ 
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf("\nSample of using condition:\n");
    int a, b;
    printf( "Input two integers:\n" );
    scanf( "%d%d", &a, &b );/*read 2 integers*/
    if( a < b )
    { printf( "%d", a );
      printf( " < %d", b ); }
    else if( a > b )
    { printf( "%d", a );
      printf( " > %d", b ); }
    else
    { printf( "%d", a );
      printf( " == %d", b ); }
    printf( "\nExersize 2.4, multiplying of 3 integers.\n" );
    int c, result;
    printf( "Input 3 integers:\n" );
    scanf( "%d%d%d", &a, &b, &c );/*input 3 integers*/
    result = a * b * c;
    printf( "\nResult is %d", result );
    printf( "\nOutput of a, b, c, result integers: %d%d%d%d", a, b, c, result );
    printf( "\n" );
    return 0;
}