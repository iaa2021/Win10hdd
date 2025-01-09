#include "config.h"
#include "stdio.h"

int main()
{
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf( "\nClemens p152, poiners and arrays.\n" );
    char * list[] = {"first", "second", "third", NULL};
    for(char **p = list; *p != NULL; p++)
    printf("%s, ", *p);
    printf("\n");
    return 0;
}