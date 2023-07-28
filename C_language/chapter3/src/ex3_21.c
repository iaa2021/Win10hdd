#include "config.h"
#include "stdio.h"
/*condition's sample*/
int main()
{ 
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    printf("\nExersize 3.21.Calculate salaries.\n");
    int hours, rate;
    double salary;
    do
    {
        printf( "\nInput hours, -1 to end input:\n" );
        scanf( "%d", &hours );
        if( hours == -1 )
        printf( "\nStop input." );
        else
        {
            printf( "\nInput hourly rate:\n" );
            scanf( "%d", &rate );
            if( hours <= 40 )
            salary = (double) hours * rate;
            else
            salary = (double) (( hours - 40 ) * 1.5 * rate + 40 * rate);

            printf( "\nSalary is: %.2lf $", salary );
        }
        
    } while ( hours != -1 );
    printf("\nExersize 3.22.Easy loop.\n");
    for (int i = 0; i < 10; i++)
    {
        printf( "%d   ", i );
    }
    printf("\nExersize 3.25.Complicate loop.\n");
    for (int i = 1; i < 10; i++)
    {
        printf( "%d\t%d\t%d\t%d\n", i, i * 10, i * 100, i * 1000 );
    }
    printf("\nExersize 3.26.Concequence loop.\n");
    printf( "A\tA + 2   A + 4   A + 6 \n" );
    for (int i = 3; i < 16; i+=3)
    {
        printf( "%d\t%d\t%d\t%d\n", i, i + 2, i + 4, i + 6 );
    }
    
    printf( "\n" );
    return 0;
}