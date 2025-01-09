#include "config.h"
#include "stdio.h"
#include "math.h"
#include "stdlib.h"
#include "time.h"
#include <stdarg.h>
double average(int , ...);
int main(){
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf( "\nEx on p605, using volatile arg's list.\n" );
    srand(time(0));
    double array[4];
    for(int i = 0; i < 4; i++)
    array[i] = rand()%50 + 1;

    printf("\nDouble numbers are:\n");
    for(int i = 0; i < 4; i++)
    printf("%.2lf, ", array[i]);

    printf("\nThe average of %.2lf and %.2lf yelds %.2lf\n", array[0], array[1],\
     average(2, array[0], array[1]));
    printf("\nThe average of %.2lf, %.2lf and %.2lf yelds %.2lf\n", array[0], array[1], array[2],\
     average(3, array[0], array[1], array[2]));
    printf("\nThe average of %.2lf, %.2lf, %.2lf and %.2lf yelds %.2lf\n", array[0], array[1], array[2],\
     array[3], average(4, array[0], array[1], array[2], array[3]));
    printf("\nEnd of run.\n");
    return 0;
}
double average(int i, ...){
    double total = 0;
    va_list ap;
    va_start(ap, i);
    for(int j = 1; j <=i; j++ ){
        total += va_arg(ap, double);
    }
    va_end(ap);
    return total / i;
}