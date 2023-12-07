#include "config.h"
#include "stdio.h"
#include "stdlib.h"
struct buyer{
    int time;
    struct buyer *next;
} *one = NULL;
void pop(struct buyer **);
void push(struct buyer **, int);
isEmpty(struct buyer *);
int main()
{
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf( "\nEx 12.15, supermarket queue.\n" );

    printf( "\nEnd of run.\n" );
    return 0;
}