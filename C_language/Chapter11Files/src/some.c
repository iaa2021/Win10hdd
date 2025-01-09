#include "config.h"
#include "stdio.h"
#include "math.h"
int main()
{
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf( "\nPasted -lm in CMakeCache.txt, checking.\n" );
    double a, c; double b;
    printf( "Input double and pow:\n" );
    scanf( "%lf %lf", &a, &c );
    printf( "%.2lf in pow %.2lf = %.2lf", a, c, pow(a, c) );
    printf( "\nInput double number for square root:\n" );
    scanf("%lf", &b);
    printf( "\nSquare root from %.2lf  = %.2lf", b, sqrt(b) );
    printf("\n");
    return 0;
}



