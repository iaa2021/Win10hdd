#include "config.h"
#include "stdio.h"
#include "math.h"
#define PI 3.14
#define SPHERE_VOLUME(x) ((4/3) * PI * pow(x, 3)) 
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
    printf("\nEnd of run.\n");
    return 0;
}
