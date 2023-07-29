#include "config.h"
#include "stdio.h"
/*condition's sample*/
int main()
{ 
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf("\nExersize 3.40.Chess desk output.\n");
    for (int i = 1; i < 9; i++)
    {
        for (int j= 1; j < 17; j++)
        {
            if( i % 2 != 0 )
            {
                if( j % 2 != 0 )
                printf("*");
                if( j % 2 == 0 )
                printf( " " );
            }
            else
            {
                if( j % 2 != 0 )
                printf(" ");
                if( j % 2 == 0 )
                printf( "*" );
            }
            if( j % 16 == 0 )
                printf( "\n" );
        }
    }
    printf("\nExersize 3.43.Check operator.\n");
    printf( "%d", ( 5 + 7 ) + 1 );
    printf( "\n" );
    return 0;
}