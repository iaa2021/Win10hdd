#include "config.h"
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
int myltiply( int, int );
int main()
{ 
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf( "\nExersise 5.32 guess number from 0 to 1000:\n" );
    srand( time( 0 ) );
    int number = rand()%1001, count = 0, result;
    do
    {
        printf( "\nInput you variant: " );
        scanf( "%d", &result );
        count++;
        if( result < number )
        printf( "\nToo little.Try again.\n" );
        if( result > number )
        printf( "\nToo large.Try again.\n" );
    } while (result != number);
    printf( "\nYou guessed right for %d attempts.\n", count );
    if( count < 10 )
    printf( "\nYou know some secret.\n" );
    printf( "\n" );
}