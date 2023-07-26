#include "config.h"
#include "stdio.h"
/*condition's sample*/
int main()
{ 
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf("\nExersize 3.17.Total sales and persent rates.\n");
    int total;
    float rate = 0.09, salary = 200;
    do {
        printf( "\nInput total sales: " );
        scanf( "%d", &total );
        if( total == -1 )
        printf( "Stop records.\n" );
        else
        printf( "\nPersent rate = %.1f persents, salary = %.2f", rate * 100, (salary + total * rate) );
    }
    while (total != -1);
    printf( "\n" );
    return 0;
}