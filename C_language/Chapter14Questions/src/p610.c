#include "config.h"
#include "stdio.h"
#include "math.h"
#include <stdlib.h>
void print();
int main(){
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf( "\nEx on p610, exit, atexit functions.\n" );
    int answer;
    atexit(print);
    printf("\nEnter 1 to terminate program with function exit;\n" \
    "Enter 2 to terminate program normally:\n");
    scanf("%d", &answer);
    if(answer == 1){
        printf("\nTermination program with function exit.\n");
        exit(EXIT_SUCCESS);
    }
    printf("Terminating program by reaching end of main.\n");
    printf("\nEnd of run.\n");
    return 0;
}
void print(){
    printf("\nExecuting function print at program termination.\n" "Program terminated.\n");
}