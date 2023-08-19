#include "config.h"
#include "stdio.h"
#include <math.h>
#include "stdlib.h"
#include "time.h"
#include "string.h"
int multiply( int, int );
int even( int );
int main()
{ 
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf( "\nExersize 5.17, multiply numbers.\nInput 2 integers:\n" );
    int a, b;
    scanf( "%d%d", &a, &b );
    if( multiply( a, b ) == 1 )
    printf( "\n%d is multiply %d\n", a, b );
    else
    printf( "\n%d is not multiply %d\n", a, b );
    printf( "\nExersize 5.18, even numbers.\n" );
    srand( time( 0 ) );
    for (int i = 0; i < 10; i++)
    {
        a = rand()%50 + 1;
        if( even( a ) == 1 )
        printf( "\n%d is an even number.", a );
        else
        printf( "\n%d is not an even number.", a );
    }
    printf( "\nExersize 5.20, quadrilateral's output, input size:\n" );
    scanf( "%d", &a );
    char symbol;
    printf( "\nInput filling symbol:\n" );
    scanf( "%c", &symbol );
    if( getchar() != '\n' )
    printf( "\nYou've entered symbol %c\n", symbol );
    
    printf( "\n" );
    return 0;
}
int multiply( int a, int b )
{
    if( a % b == 0 )
    return 1;
    else 
    return 0;
}
int even( int a )
{
    if( a % 2 == 0 )
    return 1;
    else 
    return 0;
}