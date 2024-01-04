#include <stdio.h>
#include <math.h>
#include "config.h"
#include <stdlib.h>
#include <time.h>
#define sum(...) sum_array((double[]){ __VA_ARGS__, NAN})
double sum_array(double[]);
int main(int argc, char **argv){
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf( "\nExample on page 216, macro with volatile argument's number.\n" );
    srand(time(0));
    int aSize = rand()%50 + 1;
    double *ptr = malloc(sizeof(double) * aSize);
    for(int i = 0; i < aSize - 1; i++)
    ptr[i] = rand()%100 + 1;

    ptr[aSize - 1] = NAN;
    printf("\nArray contains:\n");
    for(int i = 0; i < aSize; i++){
        printf("%.1lf, ", ptr[i]);
        if((i + 1) % 10 == 0)
        printf("\n");
    }
    printf("\nThe sum of array is %.1lf.\n", sum_array(ptr));
    double multiSum = sum(2, 2, 3, 5, 7, 54, 98);
    printf("\nThe multiSum of 2, 2, 3, 5, 7, 54, 98 via macro is %.1lf.\n", multiSum);
    printf("\n");
    return 0;
}
double sum_array(double in[]){
    double out = 0;
    for(int i = 0; !isnan(in[i]); i++)
    out += in[i];
    return out;
}