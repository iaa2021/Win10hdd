#include "config.h"
#include "stdio.h"
#include "math.h"
void roman( int );
int main()
{ 
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf("\nExersize 4.32, roman numbers output.\n");
    for (int i = 1; i <= 100; i++)
    {
        if( i <= 10 )
        roman( i );
        if( i > 10 && i < 40 )
        {
            if( i < 20 )
            {
                printf( "X" );
                roman( i % 10 );
            }
            if( i >= 20 && i < 30 )
            {
                printf( "XX" );
                roman( i % 10 );
            }
            if( i >= 30 && i < 40 )
            {
                printf( "XXX" );
                roman( i % 10 );
            }
        }
        if( i >= 40 && i < 50 )
            {
                printf( "XL" );
                roman( i % 10 );
            }
        if( i >= 50 && i < 60 )
            {
                printf( "L" );
                roman( i % 10 );
            }
        if( i >= 60 && i < 90 )
        {
            printf( "L" );
            for (int j = 0; j < (i - 50) / 10; j++)
            {
                printf( "X" );
            }
            roman( i % 10 );
        }
        if( i >= 90 && i < 100 )
            {
                printf( "XC" );
                roman( i % 10 );
            }
        if ( i == 100 )
            printf( "C" );
        
        printf( ", " );
        if (i % 10 == 0)
        printf( "\n" );
    }
    
    printf( "\n" );
    return 0;
}
void roman( int number )
{
    switch ( number )
    {
    case 1:
        printf( "I" );
        break;
    case 2:
        printf( "II" );
        break;
    case 3:
        printf( "III" );
        break;
    case 4:
        printf( "IV" );
        break;
    case 5:
        printf( "V" );
        break;
    case 6:
        printf( "VI" );
        break;
    case 7:
        printf( "VII" );
        break;
    case 8:
        printf( "VIII" );
        break;
    case 9:
        printf( "IX" );
        break;
    case 10:
        printf( "X" );
        break;
    default:
        break;
    }
}