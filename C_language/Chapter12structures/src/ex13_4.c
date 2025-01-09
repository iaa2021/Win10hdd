#include "config.h"
#include "stdio.h"
#include "math.h"
#define PI 3.14
#define SUM(z, y) z + y
#define SPHERE_VOLUME(x) ((4/3) * PI * pow(x, 3)) 
#define MINIMUM(x, y) (x < y ? x : y)
#define MINIMUM3(x, y, z) (z < MINIMUM(x, y)? z : MINIMUM(x, y))
int main(){
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf( "\nEx 13.4, sphere volume via preprocessor directive.\n" );
    printf("\nInput sphere's radius: ");
    double radius, volume = 0;
    scanf("%lf", &radius);
    volume = SPHERE_VOLUME(radius);
    printf("\nSphere with radius %.2lf sm has %.2lf sm3 volume.\n", radius, volume );
    printf( "\nEx 13.5, sum via preprocessor directive.\n" );
    int a, b, c;
    printf("\nInput 2 integers: ");
    scanf("%d%d", &a, &b);
    printf("\Sum of %d and %d yelds %d.\n", a, b, SUM(a, b));
    printf( "\nEx 13.5, minimum of 2 integers via preprocessor directive.\n" );
    printf("\nInput 2 integers: ");
    scanf("%d%d", &a, &b);
    printf("\Minimum of %d and %d is %d.\n", a, b, MINIMUM(a, b));
    printf( "\nEx 13.7, minimum of 3 integers via preprocessor directive.\n" );
    printf("\nInput 2 integers: ");
    scanf("%d%d%d", &a, &b, &c);
    printf("\Minimum of %d, %d and %d is %d.\n", a, b, c, MINIMUM3(a, b, c));
    printf("\nEnd of run.\n");
    return 0;
}
