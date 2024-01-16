#include "stdio.h"
#include "config.h"
#include "math.h"
#include "stdarg.h"
#define make_a_list(...) (double[]){__VA_ARGS__, NAN}
#define matrix_cross(list1, list2) matrix_cross_base(make_a_list list1, make_a_list list2)

void matrix_cross_base(double *list1, double *list2){
    int count1 = 0, count2 = 0;
    while(!isnan(list1[count1])) count1++;
    while(!isnan(list2[count2])) count2++;

    if(!count1 || !count2)
    {
        printf("\nData doesn't exist.\n");
        return;
    }
    for(int i = 0; i < count1; i++){
        for(int j = 0; j < count1; j++){
            printf("%.2lf\t", list1[i] * list2[j]);
            printf("\n");
        }
        printf("\n\n");
    }
}
int main(){
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf( "\nExample on page 218, work with variable length arrays via macro.\n" );
    matrix_cross((1, 2, 4, 8), (5, 11.1, 15));
    matrix_cross((17, 19, 23), (1, 2, 3, 5, 7, 11, 13));
    matrix_cross((1, 2, 3, 5, 7, 11, 13), (1));
    printf("\n");
    return 0;
}
