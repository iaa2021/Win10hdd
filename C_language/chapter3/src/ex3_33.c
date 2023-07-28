#include "config.h"
#include "stdio.h"
/*condition's sample*/
int main()
{ 
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf("\nExersize 3.33.Drawing rectangles.\n");
    for (int i = 1; i < 21; i++)
    {
        int count = i;
        while( count >= 1 )
        {
            for (int j = 1; j <= i; j++)
            {
                printf( "* " );
            }
            printf( "\n" );
            count--;
        }
        printf( "\n" );
    }
    printf( "\n" );
    return 0;
}