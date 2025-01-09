#include "config.h"
#include "stdio.h"
int main()
{
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf( "\nExersise 11.3, creation oldmast.txt.\n" );

    printf( "\n" );
    return 0;
}