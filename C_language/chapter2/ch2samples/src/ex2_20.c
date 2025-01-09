#include "config.h"
#include "stdio.h"
/*condition's sample*/
main()
{ 
    printf( "Project version is %d", (PROJECT_VERSION_MAJOR) );
    printf( ".%d", PROJECT_VERSION_MINOR );
    printf( ".%d", PROJECT_VERSION_PATCH );
    double r;
    printf("\nExersize 2.20.Input circle's radius: ");
    scanf( "%lf", &r );
    printf( "\nCircle's square is: %lf", 3.14159 * r * r );
    printf( "sm2.\nCircle's perimeter is: %lf", 3.14159 * 2 * r );
    printf( "sm.\nCircle's diameter is: %lf", 2 * r );
    printf( "sm\n" );
    printf("\nExersize 2.22.Print operator.\n");
    printf( "*\n**\n***\n****\n*****\n" );
    printf( "Shape printing:\n" ); 
    int a;/*quadrilateral's side*/
    printf( "*****\n*   *\n*   *\n*   *\n*****\n" );
    printf( "\n" );
    return 0;
}