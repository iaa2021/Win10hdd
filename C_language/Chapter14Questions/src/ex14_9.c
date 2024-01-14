#include "config.h"
#include "stdio.h"
int main( int argc, char *argv[]){
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf("\nExercise 14.9, print rectangular via goto.\n");
    int count = 1;
    start:
    if(count > 5)
    goto end;
    if(count == 1 || count == 5)
    printf("*****\n");
    else
    printf("*   *\n");
    count++;
    goto start;
    end:
    putchar('\n');
    printf("\nEnd of run.\n");
    return 0;
}