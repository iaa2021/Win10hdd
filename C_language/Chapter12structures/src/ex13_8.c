#include "config.h"
#include "stdio.h"
#include "math.h"
#include "stdlib.h"
#include "time.h"
#define PRINT(x) printf("Hello, "#x"\n")
#define PRINTARRAY(x, y) (print(x, y))
#define SUMARRAY(x, y) (sumArray0(x, y))
void print(int *, int);
int sumArray(int *, int);
int main(){
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf( "\nEx 13.8, print via preprocessor directive.\n" );
    PRINT(John);
    printf( "\nEx 13.9, print array via preprocessor directive.\n" );
    srand(time(0));
    int a;
    printf("\nInput size of array: ");
    scanf("%d", &a);
    int *ptr = malloc(sizeof(int) * a);
    for(int i = 0; i < a; i++)
    ptr[i] = rand()%50 + 1;
    printf("\nArray is:\n");
    PRINTARRAY(ptr, a);
    printf( "\nEx 13.10, sum of array via preprocessor directive.\n" );
    printf("%d", SUMARRAY(ptr, a));
    printf("\nEnd of run.\n");
    return 0;
}
void print(int *array, int aSize){
    for(int i = 0; i < aSize; i++){
        printf("%3d, ", array[i]);
        if((i%10 == 0))
        printf("\n");
    }
}
int sumArray(int *array, int aSize){
    int total = 0;
    for(int i = 0; i < aSize; i++){
        total += array[i];
    }
    return total;
}