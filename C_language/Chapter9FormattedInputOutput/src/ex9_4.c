#include "config.h"
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
int main()
{ 
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf( "\nExersise 9.4.\n" );
    printf( "%#xd\n", 100 );
    printf( "%9.3lf\n", 1.234 );
    int h, m, s;
    printf( "Input time in format hh:mm:ss.\n" );
    scanf( "%d%*c%d%*c%d", &h, &m, &s );
    printf( "\nTime is %d/%d/%d\n", h, m, s );
    char s1[20];
    printf( "Exersise 9.7.\n" );
    srand( time(0) );
    int array[10], value, total = 0;
    for (size_t i = 0; i < 10; i++)
    {
        array[i] = rand()%1000 + 1;
    }
    printf( "Value   Total characters\n" );
    for (size_t i = 0; i < 10; i++)
    {
        printf( "%-d%n ", array[i], &value );
        total += value;
        printf( "%8d\n", total );
    }
    printf( "\n" );
    return 0;
}