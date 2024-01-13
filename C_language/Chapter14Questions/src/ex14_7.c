#include "config.h"
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
int main( int argc, char *argv[]){
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf("\nExercise 14.7, working with malloc and realloc functions.\n");
    srand(time(0));
    int aSize = rand()%50 + 1;
    printf("\nArray size is %d.\n", aSize);
    int *ptr = malloc(sizeof(int) * aSize);
    for (int i = 0; i < aSize; i++)
        ptr[i] = rand()%100 + 1;

    printf("\nArray contains:\n");
    for (int i = 0; i < aSize; i++){
        printf("%d, ", ptr[i]);
        if((i + 1) % 10 == 0)
        printf("\n");
    }
    aSize /= 2;
    printf("\nNew array size is %d.\n", aSize);
    ptr = realloc(ptr, sizeof(int) * aSize);
    printf("\nNew array contains:\n");
    for (int i = 0; i < aSize; i++){
        printf("%d, ", ptr[i]);
        if((i + 1) % 10 == 0)
        printf("\n");
    }
    printf("\nEnd of run.\n");
    return 0;
}