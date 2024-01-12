#include "config.h"
#include "stdio.h"
#include "math.h"
#include "time.h"
#include "stdlib.h"
#include "string.h"
int *ascending(int *, int);/*function's args are array & array's size*/
int *descending(int *, int);
void print(int *, int);
int main( int argc, char *argv[]){
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf("\nExercise 14.3, command lines arguments output\n");
    for(int i = 0; i < argc; i++)
    {
        printf("%s, ", argv[i]);
    }
    printf( "\nExercise 14.4, integer array in ascending, input -a in command line,\n",
    "and descending, input -d, order.\n" );
    srand(time(0));
    int a = rand()%50 + 1;/*array's size*/
    printf("Array's size is %d\n", a);
    int *ptr = malloc(a * sizeof(int));
    for (int i = 0; i < a; i++)
    {
        ptr[i] = rand()%50 + 1;
    }
    printf("Array contains:\n");
    for (int i = 0; i < a; i++)
    {
        printf("%2d, ", ptr[i]);
        if((i + 1) % 10 == 0)
        printf("\n");
    }
    if(strcmp(argv[1],"-a") == 0){
        printf("\nArray in ascending order is:\n");
        ascending(ptr, a);
        print(ptr, a);
    }
    else if (strcmp(argv[1],"-d") == 0)
    {
        printf("\nArray in descending order is:\n");
        descending(ptr, a);
        print(ptr, a);
    }
    else
    printf("\nWrong 2d argument.\n");

    printf("\nEnd of run.\n");
    return 0;
}
int *ascending(int *ptr, int size){
    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if(ptr[i] > ptr[j]){
                temp = ptr[i];
                ptr[i] = ptr[j];
                ptr[j] = temp;
            }
        }
    }
    return ptr;
}
int *descending(int *ptr, int size){
    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if(ptr[i] < ptr[j]){
                temp = ptr[i];
                ptr[i] = ptr[j];
                ptr[j] = temp;
            }
        }
    }
    return ptr;
}
void print(int *ptr, int size){
    for (int i = 0; i < size; i++)
    {
        printf("%2d, ", ptr[i]);
        if((i + 1) % 10 == 0)
        printf("\n");
    }
}