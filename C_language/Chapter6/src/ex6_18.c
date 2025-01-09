#include "config.h"
#include "stdio.h"
#define SIZE 10
void some( int[], int );
int main()
{ 
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf( "\nExersise 6_18:\n" );
    int array[ SIZE ] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    printf( "\nThe values in the array is:\n");
    some( array, SIZE );
    printf( "\n" );
    return 0;
}
void some( int b[], int size )
{
    if( size > 0 ){
        some( &b[ 1 ], size - 1 );
        printf( "%d ", b[ 0 ] );
    }
}