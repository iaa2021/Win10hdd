#include "config.h"
#include "stdio.h"
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
    printf( "\n" );
    return 0;
}