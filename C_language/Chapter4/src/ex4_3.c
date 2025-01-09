#include "config.h"
#include "stdio.h"
#include "math.h"
/*condition's sample*/
int main()
{ 
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf("\nExersize 4.3.\n");
    printf ( "Sum fron 1 till 100.\n" );
    int sum = 0;
    for ( int i = 1; i <= 100; sum += i, i++);
    printf( "\nSum = %d", sum );
    printf( "\nOutput of 333.547854 with width 21:\n" );
    double y = 333.547854;
    printf( "%21.6lf\n", y );
    printf( "\npow( 2.5, 3 ) = %10.2lf\n\n", pow( 2.5, 3 ) );
    int x = 1;
    do
    {
        if( x % 5 == 0 )
        printf( "%3d,\n", x );
        else
        printf( "%3d, ", x );

        x++;
    } while ( x <= 20 );
    printf( "\n" );
    for (int i = 1; i < 21; i++)
    {
        if( i % 5 == 0 )
        printf( "%3d,\n", i );
        else
        printf( "%3d, ", i );
    }
    printf( "\n" );
    for (float i = 0.1; i <= 1; i += 0.1 )
    {
        printf( "%.2f, ", i );
    }
    printf( "\nInput an char and integer:\n" );
    char a = getchar(); int b;
    scanf( "%d", &b );
    printf( "%c, %d\n", a, b );
    printf( "\n" );
    return 0;
}