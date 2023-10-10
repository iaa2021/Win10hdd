#include <stdio.h>
#include <math.h>

int main()
{
    double a;
    printf( "\nInput number for square root: " );
    scanf( "%lf", &a );
    printf( "\nSquare root from %.2lf = %.2lf;", a, sqrt( a ) );
    printf("\n");
    return 0;
}