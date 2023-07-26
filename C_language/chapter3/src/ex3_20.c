#include "config.h"
#include "stdio.h"
/*condition's sample*/
int main()
{ 
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf("\nExersize 3.17.Common persent rates.\n");
    int rate, days;
    double persRate, principal, interest;
    do
    {
        printf( "\nInput loan's sum: " );
        scanf( "%lf", &principal );
        if( principal == -1 )
        printf( "Records've been stopped." );
        else
        {
            printf( "\nInput interest' rate: " );
            scanf( "%d", &rate );
            persRate = (double) rate / 100;
            printf( "\nInput loan's termin in days: " );
            scanf( "%d", &days );
            interest = (double)principal * persRate * days / 365;
            printf( "\nInterest rate's payment are: %.2lf $", interest );
        }
    } while (principal != -1);
    
    printf( "\n" );
    return 0;
}