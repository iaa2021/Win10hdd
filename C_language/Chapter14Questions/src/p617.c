#include "config.h"
#include <stdio.h>
int main(){
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf( "\nEx on p617, goto processing.\n" );
    int count = 1;
    start:
    if(count > 10)
    goto end;
    printf("%d, ", count);
    ++count;
    goto start;
    end:
    printf("\nEnd of run.\n");
    return 0;
}