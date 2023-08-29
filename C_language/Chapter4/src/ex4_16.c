#include "config.h"
#include "stdio.h"
#include "math.h"
int factorial( int );
int revFactorial( int );
int main()
{ 
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf("\nExersize 4.15, images output.\n");
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf( "*" );
        }
        printf( "\n");
    }
    printf( "\n");
    for (int i = 10; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf( "*" );
        }
        printf( "\n");
    }
    printf( "\n");
    for (int i = 10; i >= 1; i--)
    {
        for (int j = 1; j <= 10; j++)
        {
            if( j <= 10 - i )
            printf( " " );
            else
            printf( "*" );
        }
        printf( "\n");
    }
    printf( "\n");
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            if( j <= 10 - i )
            printf( " " );
            else
            printf( "*" );
        }
        printf( "\n");
    }
    printf( "\n");
    return 0;
}