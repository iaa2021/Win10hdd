#include "config.h"
#include "stdio.h"
#include "time.h"
int main()
{ 
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf( "\nCurrent date and time:\n" );
    time_t rawtime;
    struct tm *timeinfo;
    char buffer[ 80 ];
    char *months[12] = { "January", "February", "March", "April",\
    "May", "June", "July", "August", "September", "October", "November", "December"};
    time( &rawtime );
    timeinfo = localtime( &rawtime );
    strftime( buffer, sizeof( buffer ), "%Y-%m-%d %H:%M:%S", timeinfo );
    printf("Formatted date and time: %s\n", buffer);
    int date[ 3 ];
    printf( "\nInput month, date, year: " );
    scanf("%d", &date[0]);
    scanf( "%d", &date[ 1 ] );
    scanf( "%d", &date[ 2 ] );
    printf( "\nDate is %d/%d/%d\n", date[0], date[ 1 ], date[ 2 ] );
    printf("\nAnother date format is %s %d %d", months[date[0] - 1], date[ 1 ], date[ 2 ]);
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