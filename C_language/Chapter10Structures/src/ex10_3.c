#include "config.h"
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
struct part
{
    int partNumber;
    char partName[25];
} a, b[10], *ptr;

int main()
{ 
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf( "\nExersise 10.3, input partNumber and partName.\n" );
    typedef struct part Part;
    ptr = &a;
    scanf( "%d%s", &(a.partNumber), a.partName );
    b[2] = a;
    printf( "\nValue of b[2]: %d, %s\n", b[2].partNumber, b[2].partName );
    printf( "\nValue of b[2] via ptr: %d, %s\n", ptr->partNumber, ptr->partName );
    printf( "\n" );
    return 0;
}