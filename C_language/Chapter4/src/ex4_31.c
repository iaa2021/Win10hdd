#include "config.h"
#include "stdio.h"
#include "math.h"
int main()
{ 
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf("\nExersize 4.31, rhombus output.\n");
    int diagonal;
    printf( "\nInput diagonal: " );
    scanf( "%d", &diagonal );
    for (int i = 0; i < diagonal; i++)
    {
        for (int j = 0; j < diagonal; j++)
        {
            if( i <= diagonal / 2 )/*first half*/
        {
            if( j >= (diagonal / 2) - i && j <= (diagonal / 2) + i )
            printf( "*" );
            else
            printf( " " );
        }
        else/*second half*/
            {
                if( j >= i - diagonal / 2 && j < diagonal - i + diagonal / 2 )
                printf( "*" );
                else
                printf( " " );
            }
        }
        printf( "\n" );
    }
    printf( "\n" );
    return 0;
}