#include "config.h"
#include "stdio.h"
#include "math.h"
int factorial( int );
int revFactorial( int );
int main()
{ 
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf("\nExersize 4.19, switch sample.\n");
    double total1, total2, total3, total4, total5;
    int number, quantity;
    do
    {
        printf( "\nInput good's number, -1 to end input: " );
        scanf( "%d", &number );
        if( number != -1 )
        {
            printf( "\nInput good's quantity: " );
            scanf( "%d", &quantity );
            switch (number)
            {
            case 1:
                total1 = (double)2.98 * number;
                break;
            case 2:
                total2 = (double)4.50 * number;
                break;
            case 3:
                total3 = (double)9.98 * number;
                break;
            case 4:
                total4 = (double)4.49 * number;
                break;
            case 5:
                total5 = (double)6.87 * number;
                break;
            default:
            printf( "\nYou've entered wrong number.\n" );
                break;
            }
        }
    } while (number != -1);
    printf( "\nDuring the week was sold:\n" );
    printf( "#1 %d gees x %.2lf$ = %.2lf$\n", (int)(total1 / 2.98), 2.98, total1 );
    printf( "#2 %d gees x %.2lf$ = %.2lf$\n", (int)(total2 / 4.50), 4.50, total2 );
    printf( "#3 %d gees x %.2lf$ = %.2lf$\n", (int)(total3 / 9.98), 9.98, total3 );
    printf( "#4 %d gees x %.2lf$ = %.2lf$\n", (int)(total4 / 4.49), 4.49, total4 );
    printf( "#5 %d gees x %.2lf$ = %.2lf$\n", (int)(total5 / 6.87), 6.87, total5 );
    printf( "\nTotal sales = %.2lf$", total1 + total2 + total3 + total4 + total5 );
    printf( "\n" );
    return 0;
}