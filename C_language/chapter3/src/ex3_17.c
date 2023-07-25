#include "config.h"
#include "stdio.h"
/*condition's sample*/
main()
{ 
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf("\nExersize 3.17.Gasolin's consumption.\n");
    int way, refueling, totalWay = 0, totalFuel = 0;
    double average;
    do
    {
        printf( "\nInput travelled distance, -1 to end input: " );
        scanf( "%d", way );
        if (way == -1)
        printf( "\nThere are not records.\n" );
        else
        {
            printf( "\nInput refueling: " );
            scanf( "%d", refueling );
            average = (double) way / refueling;
            totalFuel += refueling;
            totalWay += way;
            printf( "\nAverage is %.2lf", average );
        }
        
    } while (way != -1);
    
    printf( "\nTotal way is %d, total refueling is %d", totalWay, totalFuel );
    printf( "\nTotal average is %.2lf km per gallon.", ( double )totalWay / totalFuel );
    return 0;
}