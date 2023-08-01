#include "config.h"
#include "stdio.h"
#include <iostream>
using std::cout;
#include <cmath>
using std::pow;
using std::cbrt;
#include "math.h"
/*condition's sample*/
int main()
{ 
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf("\nMath tasks from you tube.\n");
    cout << "\nEquation1. x * pow( 27, x ) == 1";
    for (int i = 1; i < 10; i++)
    {
        double x = ( double ) 1 / i;
        if( x * pow( 27, x ) == 1 )
        cout << "\nThe power = 1 / " << i << '\n';
        
    }
    cout << "\nEquation2. pow( 7, x ) == 70\n";
    double x = log( 70 )/ log( 7 );
    printf( "\nx = %.3lf", x );
    printf( "\n" );
    cout << "\nEquation3. pow( x, 4 ) / 10 == 8 * x\n";
    x = cbrt( 80 );
    printf( "x = %.5lf\n", x );
    cout << '\n';
    return 0;
}