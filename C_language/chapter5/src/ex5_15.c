#include "config.h"
#include "stdio.h"
#include <math.h>
double hipo( double, double );
int main()
{ 
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    double a, b;
    for (int i = 0; i < 3; i++)
    {
        printf( "\nInput triangle's sides:\n" );
        scanf( "%lf%lf", &a, &b );
        printf( "\nHipotenuse = %.2lf;\n", hipo( a, b ) );
    }
    return 0;
}
double hipo( double a, double b )
{
    double c = sqrt(pow( a, 2 ) + pow( b, 2 ));
    return c;
}