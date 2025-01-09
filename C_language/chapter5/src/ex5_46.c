#include "config.h"
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
int mystery( int, int );
int main()
{ 
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf( "\nExersise 5.47 mystery program:\n" );
    printf( "\nInput 2 integers: " );
    int a, b;
    scanf( "%d%d", &a, &b );
    printf( "\nResult = %d\n", mystery( a, b ) );
    printf( "\n" );
    return 0;
}
int mystery( int a, int b )
{
    if( b == 1 )
    return a;
    else
    return a + mystery( a, b - 1 );
}